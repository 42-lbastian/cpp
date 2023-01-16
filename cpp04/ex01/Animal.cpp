#include "Animal.hpp"

AAnimal::AAnimal(void):_type("AAnimal")
{
	std::cout << "Default Constructor AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal)
{
	std::cout << "Copy Constructor AAnimal" << std::endl;
	(*this) = animal;
}

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

void AAnimal::makeSound(void) const
{
	std::cout << this->_type << " is mute" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
