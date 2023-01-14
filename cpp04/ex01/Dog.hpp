#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);
		Dog& operator=(const Dog& dog);
		void makeSound(void) const;
		void setIdea(std::string idea);
		void printIdea(void) const;


	private:
		Brain* _brain;
};





#endif
