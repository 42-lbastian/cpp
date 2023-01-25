#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog& dog);
		virtual ~Dog(void);
		Dog& operator=(const Dog& dog);
		AAnimal& operator=(const AAnimal& animal);
		void makeSound(void) const;
		Brain* getBrain(void) const;


	private:
		Brain* _brain;
};





#endif
