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
		Animal& operator=(const Animal& animal);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual void setIdea(std::string idea);
		virtual void printIdea(void) const;

	private:
		Brain* _brain;

	protected:
		std::string _type;
	
};





#endif
