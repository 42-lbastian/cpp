#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default Constructor WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
	std::cout << "Copy Constructor WrongCat" << std::endl;
	(*this) = wrongCat;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
	std::cout << "Copy Operator WrongCat" << std::endl;
	if (this != &wrongCat)
		this->_type = wrongCat._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << this->_type << " say miaaaaaaou" << std::endl;
}
