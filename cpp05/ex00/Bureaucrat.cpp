#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Constructor Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): _grade(grade), _name(name)
{
	std::cout << "Arg Constructor Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Copy Constructor Bureaucrat" << std::endl;
	(*this) = bureaucrat;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if (this != &bureaucrat)
		this->_grade = bureaucrat._grade;
	return ((*this));
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

void Bureaucrat::incrGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrGrade(void)
{
	if (this->_grade < LOWESTGRADE)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
