#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		virtual ~AAnimal(void);
		virtual AAnimal& operator=(const AAnimal& animal) = 0;
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual Brain* getBrain(void) const = 0;

	protected:
		std::string _type;
	
};

#endif
