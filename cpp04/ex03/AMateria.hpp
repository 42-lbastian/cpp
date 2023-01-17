#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& materia);
		virtual ~AMateria(void);
		AMateria& operator=(const AMateria& materia);
		std::string const & getType() const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:
		std::string _type;


};


#endif
