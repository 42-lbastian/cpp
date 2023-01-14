#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("WrongAnimal")
{
	std::cout << "Default Constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	std::cout << "Copy Constructor WrongAnimal" << std::endl;
	(*this) = wrongAnimal;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	std::cout << "Copy Operator WrongAnimal" << std::endl;
	if (this != &wrongAnimal)
		this->_type = wrongAnimal._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " is mute" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
