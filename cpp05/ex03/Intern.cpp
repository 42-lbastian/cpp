#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Default Constructor Intern" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Copy Constructor Intern" << std::endl;
	(*this) = intern;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	(void) intern;
	std::cout << "Copy Operator Intern" << std::endl;
	return ((*this));
}

AForm* Intern::makeform(std::string form, std::string target)
{
	std::string form_name[NB_FORM] = {"Shrubbery Form", "Robotomy Form", "PresidentialPardon Form"};
	try
	{
		AForm *form_array[NB_FORM] = {
			new ShrubberyCreationForm(target), 
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)};
		for (int i = 0; i < NB_FORM; i++)
		{
			if (form == form_name[i])
			{
				for (int j = 0; j < NB_FORM; j++)
					if (j != i)
						delete form_array[j];
				std::cout << "Intern creates " << form << std::endl;
				return (form_array[i]);
			}
		}
		for (int i = 0; i < NB_FORM; i++)
			delete form_array[i];
		std::cout << "Intern don't know the form: " << form << std::endl;
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory allocation makeform of intern failed" << std::endl;
	}
	return (NULL);
}
