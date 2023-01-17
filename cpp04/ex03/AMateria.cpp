#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Default Constructor AMateria" << std::endl;
}

AMateria::AMateria(const std::string& type):_type(type)
{
	std::cout << "Type Constructor AMateria" << std::endl;
}

AMateria::AMateria(const AMateria& materia)
{
	std::cout << "Copy Constructor AMateria" << std::endl;
	(*this) = materia;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor AMateria" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& materia)
{
	std::cout << "Copy Operator AMateria" << std::endl;
	if (this != &materia)
		this->_type = materia._type;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (this->_type);
}
