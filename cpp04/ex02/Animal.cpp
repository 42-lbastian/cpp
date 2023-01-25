#include "Animal.hpp"

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
	std::cout << "Copy Operator AAnimal" << std::endl;
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
