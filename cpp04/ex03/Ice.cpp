#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Default Constructor Ice" << std::endl;
}

Ice::Ice(const Ice& ice)
{
	std::cout << "Copy constructor Ice" << std::endl;
	(*this) = ice;
}

Ice::~Ice(void)
{
	std::cout << "Destructor Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& ice)
{
	std::cout << "Copy Operator Ice" << std::endl;
	if (this != &ice)
	{
		this->_type = ice._type;
	}
	return (*this);
}

AMateria* Ice::clone(void) const
{
	AMateria* materia = new Ice((*this));
	return (materia);
}
