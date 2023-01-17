#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Default Constructor Cure" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure& cure)
{
	std::cout << "Copy constructor Cure" << std::endl;
	(*this) = cure;
}

Cure::~Cure(void)
{
	std::cout << "Destructor Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& cure)
{
	std::cout << "Copy Operator Cure" << std::endl;
	if (this != &cure)
	{
		this->_type = cure._type;
	}
	return (*this);
}

AMateria* Cure::clone(void) const
{
	AMateria* materia = new Cure((*this));
	return (materia);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
