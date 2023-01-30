#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm(72, 45, "Robotomy")
{
	std::cout << "Default Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm)
{
	std::cout << "Copy Constructor RobotomyRequestForm" << std::endl;
	(*this) = robotomyRequestForm;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(72, 45, target + " Form"), _target(target)
{
	std::cout << "Arg Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyRequestForm)
{
	std::cout << "Copy Operator RobotomyRequestForm" << std::endl;
	if (this != &robotomyRequestForm)
		this->_target = robotomyRequestForm._target;
	return ((*this));
}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::NotSigned();
	else
	{
		srand (time(NULL));
		if ((rand() % 2) == 1)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << "the robotomy failed" << std::endl;
	}
}
