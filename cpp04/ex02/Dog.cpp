#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Constructor Dog" << std::endl;
	this->_brain = new Brain();
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
	delete this->_brain;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Copy Operator Dog" << std::endl;
	if (this != &dog)
	{
		this->_brain = new Brain();
		(*this->_brain) = (*dog._brain);
		this->_type = dog._type;
	}
	return (*this);
}

AAnimal& Dog::operator=(const AAnimal& animal)
{
	std::cout << "Copy Operator AnimaDog" << std::endl;
	if (this != &animal)
	{
		(*this->_brain) = (*animal.getBrain());
		this->_type = animal.getType();
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << " say bark bark wouuuf" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return (this->_brain);
}
