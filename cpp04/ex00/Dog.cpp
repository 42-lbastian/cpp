#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Constructor Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Copy Constructor Dog" << std::endl;
	(*this) = dog;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
		this->_type = dog._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << " say bark bark wouuuf" << std::endl;
}
