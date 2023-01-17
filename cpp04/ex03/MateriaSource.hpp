#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define NB_MEMORY 4

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiasource);
		~MateriaSource(void);
		MateriaSource& operator=(const MateriaSource& materiasource);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(const std::string& type);
	
	private:
		AMateria* _memory[NB_MEMORY];
		int       _nb_memory;
};

#endif
