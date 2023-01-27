#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const int grade_to_sign, const int grade_to_execute, const std::string name);
		Form(const Form& form);
		~Form(void);
		Form& operator=(const Form& form);
		const std::string getName(void) const;
		int               getGradeSign(void) const;
		int               getGradeExec(void) const;
		bool              getIsSigned(void) const;
		void              beSigned(Bureaucrat& bureaucrat);

	private:
		const std::string _name;
		const int         _grade_to_sign;
		const int         _grade_to_execute;
		bool              _is_signed;
	
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream& o, Form& form);

#endif
