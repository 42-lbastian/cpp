#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "Default Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm)
{
	std::cout << "Copy Constructor RobotomyRequestForm" << std::endl;
	(*this) = robotomyRequestForm;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):_target(target)
{
	std::cout << "Arg Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
		this->_target = robotomyRequestForm._target;
	return ((*this));
}

void RobotomyRequestForm::exec(void)
{
	srand (time(NULL));
	if ((rand() % 2) == 1)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy failed" << std::endl;
}
