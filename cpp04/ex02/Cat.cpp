#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Constructor Cat" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Copy Constructor Cat" << std::endl;
	(*this) = cat;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat" << std::endl;
	delete  this->_brain;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Copy Operator Cat" << std::endl;
	if (this != &cat)
	{
		this->_brain = new Brain();
		(*this->_brain) = (*cat._brain);
		this->_type = cat._type;
	}
	return (*this);
}

AAnimal& Cat::operator=(const AAnimal& animal)
{
	std::cout << "Copy Operator Cat" << std::endl;
	if (this != &animal)
	{
		(*this->_brain) = (*animal.getBrain());
		this->_type = animal.getType();
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << " say miaaaaaaou" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return (this->_brain);
}
