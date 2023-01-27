#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#define LOWESTGRADE 150

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

	private:
		int               _grade;
		const std::string _name;

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Can't incr, grade is too high");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Can't decr, grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
