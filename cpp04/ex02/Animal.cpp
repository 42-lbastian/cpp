#include "Animal.hpp"

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
