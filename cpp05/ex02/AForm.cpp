#include "AForm.hpp"

AForm::AForm(void):_name("Unknown"), _grade_to_sign(0), _grade_to_execute(0), _is_signed(false)
{
	std::cout << "Default Constructor AForm" << std::endl;
}

AForm::AForm(const int grade_to_sign, const int grade_to_execute, const std::string name):
	 _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute), _is_signed(false)
{
	std::cout << "Arg Constructor AForm" << std::endl;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	else if (grade_to_sign > LOWESTGRADE || grade_to_execute > LOWESTGRADE)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& form):_name(form.getName()), _grade_to_sign(form.getGradeSign()), _grade_to_execute(form.getGradeExec())
{
	std::cout << "Copy Constructor AForm" << std::endl;
	(*this) = form;
}

AForm::~AForm(void)
{
	std::cout << "Destructor AForm" << std::endl;
}

AForm& AForm::operator=(const AForm& form)
{
	if (this != (&form))
		this->_is_signed = form.getIsSigned();
	return (*this);
}

const std::string AForm::getName(void) const
{
	return (this->_name);
}

int AForm::getGradeSign(void) const
{
	return (this->_grade_to_sign);
}

int AForm::getGradeExec(void) const
{
	return (this->_grade_to_execute);
}

bool AForm::getIsSigned(void) const
{
	return (this->_is_signed);
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw AForm::GradeTooLowException();
	else
		this->_is_signed = true;
}

std::ostream& operator<<(std::ostream& o, AForm& form)
{
	o << "AForm " << form.getName() << " need grade " << form.getGradeSign() << " to be signed and grade " 
			<< form.getGradeExec() << " to be executed -- Signed: " << form.getIsSigned();
	return (o);
}
