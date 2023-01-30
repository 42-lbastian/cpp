#include "Form.hpp"

Form::Form(void):_name("Unknown"), _grade_to_sign(0), _grade_to_execute(0), _is_signed(false)
{
	std::cout << "Default Constructor Form" << std::endl;
}

Form::Form(const int grade_to_sign, const int grade_to_execute, const std::string name):
	 _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute), _is_signed(false)
{
	std::cout << "Arg Constructor Form" << std::endl;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > LOWESTGRADE || grade_to_execute > LOWESTGRADE)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& form):_name(form.getName()), _grade_to_sign(form.getGradeSign()), _grade_to_execute(form.getGradeExec())
{
	std::cout << "Copy Constructor Form" << std::endl;
	(*this) = form;
}

Form::~Form(void)
{
	std::cout << "Destructor Form" << std::endl;
}

Form& Form::operator=(const Form& form)
{
	std::cout << "Copy Operator Form" << std::endl;
	if (this != (&form))
		this->_is_signed = form.getIsSigned();
	return (*this);
}

const std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeSign(void) const
{
	return (this->_grade_to_sign);
}

int Form::getGradeExec(void) const
{
	return (this->_grade_to_execute);
}

bool Form::getIsSigned(void) const
{
	return (this->_is_signed);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	else
		this->_is_signed = true;
}

std::ostream& operator<<(std::ostream& o, Form& form)
{
	o << "Form " << form.getName() << " need grade " << form.getGradeSign() << " to be signed and grade " 
			<< form.getGradeExec() << " to be executed -- Signed: " << form.getIsSigned();
	return (o);
}
