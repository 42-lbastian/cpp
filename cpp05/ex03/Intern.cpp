#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default Constructor Intern" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Copy Constructor Intern" << std::endl;
	(*this) = intern;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << "Copy Operator Intern" << std::endl;
	return ((*this));
}

AForm* Intern::makeform(std::string form, std::string target)
{

}
