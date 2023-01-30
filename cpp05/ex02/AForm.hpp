#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(const int grade_to_sign, const int grade_to_execute, const std::string name);
		AForm(const AForm& form);
		~AForm(void);
		AForm& operator=(const AForm& form);
		const std::string getName(void) const;
		int               getGradeSign(void) const;
		int               getGradeExec(void) const;
		bool              getIsSigned(void) const;
		void              beSigned(Bureaucrat& bureaucrat);
		void              execute(const Bureaucrat& bureaucrat);

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

std::ostream& operator<<(std::ostream& o, AForm& form);

#endif
