#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);
		void execute(const Bureaucrat& bureaucrat);
	
	private:
		std::string _target;
};

#endif
