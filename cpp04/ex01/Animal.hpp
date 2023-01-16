#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& animal);
		virtual ~Animal(void);
		virtual Animal& operator=(const Animal& animal);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual Brain* getBrain(void) const = 0;

	protected:
		std::string _type;
	
};





#endif
