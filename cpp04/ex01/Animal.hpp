#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal& animal);
		virtual ~AAnimal(void);
		virtual AAnimal& operator=(const AAnimal& animal);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual Brain* getBrain(void) const = 0;

	protected:
		std::string _type;
	
};





#endif
