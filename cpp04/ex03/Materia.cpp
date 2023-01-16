#include "Materia.hpp"

AMateria::AMateria(void)
{
	std::cout << "Default Constructor Materia" << std::endl;
}

AMateria::AMateria(const std::string& type):_type(type)
{
	std::cout << "Type Constructor Materia" << std::endl;
}

AMateria::AMateria(const AMateria& materia)
{
	std::cout << "Copy Constructor Materia" << std::endl;
	(*this) = materia;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor Materia" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& materia)
{
	std::cout << "Copy Operator Materia" << std::endl;
	if (this != &materia)
		this->_type = materia._type;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (this->_type);
}
