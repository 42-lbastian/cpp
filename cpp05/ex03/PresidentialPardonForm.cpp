#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm(25, 5, "Presidential Pardon")
{
	std::cout << "Default Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm)
{
	std::cout << "Copy Constructor PresidentialPardonForm" << std::endl;
	(*this) = presidentialPardonForm;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(25, 5, target + " Form"), _target(target)
{
	std::cout << "Arg Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialPardonForm)
{
	std::cout << "Copy Operator PresidentialPardonForm" << std::endl;
	if (this != &presidentialPardonForm)
		this->_target = presidentialPardonForm._target;
	return ((*this));
}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::NotSigned();
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}
