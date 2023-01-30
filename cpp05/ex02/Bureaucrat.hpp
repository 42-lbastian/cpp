#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

#define LOWESTGRADE 150

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		int               getGrade(void) const;
		const std::string getName(void) const;
		void              incrGrade(void);
		void              decrGrade(void);
		void              signForm(AForm& form);
		void              executeForm(const AForm& form);

	private:
		int               _grade;
		const std::string _name;

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade for Bureaucrat is too high");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade for Bureaucrat is too low");
				}
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
