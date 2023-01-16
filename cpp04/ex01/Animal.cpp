#include "Animal.hpp"

Animal::Animal(void):_type("Animal")
{
	std::cout << "Default Constructor Animal" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy Constructor Animal" << std::endl;
	(*this) = animal;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Copy Operator Animal" << std::endl;
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << this->_type << " is mute" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
