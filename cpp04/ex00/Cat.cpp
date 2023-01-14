#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Constructor Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Copy Constructor Cat" << std::endl;
	(*this) = cat;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Copy Operator Cat" << std::endl;
	if (this != &cat)
		this->_type = cat._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << " say miaaaaaaou" << std::endl;
}
