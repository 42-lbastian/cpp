#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
		void execute(const Bureaucrat& bureaucrat);
	
	private:
		std::string _target;
};

#endif
