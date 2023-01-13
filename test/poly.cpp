#include "poly.hpp"

#include <iostream>

Animal::Animal(void):_nb_legs(-1)
{
}

Animal::Animal(int legs):_nb_legs(legs)
{
}

Animal::Animal(Animal& animal)
{
	(*this) = animal;
}

Animal::~Animal(void)
{
}

Animal& Animal::operator=(Animal& animal)
{
	if (this != &animal)
		this->_nb_legs = animal._nb_legs;
	return (*this);
}

void Animal::print_legs(void)
{
	std::cout << "I have " << this->_nb_legs << " legs" << std::endl;
}

void Animal::sound(void)
{
	std::cout << "Mute" << std::endl;
}

Cat::Cat(void)
{
	this->_nb_legs = -13;
}

Cat::Cat(int legs)
{
	this->_nb_legs = legs;
}

Cat::Cat(Cat& cat)
{
	(*this) = cat;
}

Cat::~Cat(void)
{
}

Cat& Cat::operator=(Cat& cat)
{
	if (this != &cat)
		this->_nb_legs = cat._nb_legs;
	return (*this);
}

void Cat::sound(void)
{
	std::cout << "Miaou Miaou Miaou" << std::endl;
}

int main(void)
{
	Animal an;
	Cat cat;
	Animal* monster = new Cat();

	an.sound();
	cat.sound();
	monster->sound();
}
