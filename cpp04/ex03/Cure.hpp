#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		~Cure(void);
		Cure& operator=(const Cure& cure);
		AMateria* clone(void) const;
		void use(ICharacter& target);


};

#endif
