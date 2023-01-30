#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "Default Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm)
{
	std::cout << "Copy Constructor PresidentialPardonForm" << std::endl;
	(*this) = presidentialPardonForm;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):_target(target)
{
	std::cout << "Arg Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
		this->_target = presidentialPardonForm._target;
	return ((*this));
}

void PresidentialPardonForm::exec(void)
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
