#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("Unknown")
{
	std::cout << "Default Constructor Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): _name(name)
{
	std::cout << "Arg Constructor Bureaucrat" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > LOWESTGRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat):_name(bureaucrat.getName())
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
	std::cout << "Copy operator Bureaucrat" << std::endl;
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
	{
		this->_grade--;
		std::cout << this->_name << " is now grade " << this->_grade << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrGrade(void)
{
	if (this->_grade < LOWESTGRADE)
	{
		this->_grade++;
		std::cout << this->_name << " is now grade " << this->_grade << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned((*this));
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException& low)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because grade too low" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
