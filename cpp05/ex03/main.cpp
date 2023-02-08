#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern titi;
	AForm* form;
	Bureaucrat toto(3, "Toto");
	Bureaucrat otot(150, "Otot");
	std::cout << std::endl;

	form = titi.makeform("Shlubudu", "house");
	std::cout << std::endl;
	form = titi.makeform("Shrubbery Form", "house");
	std::cout << std::endl;
	
	toto.executeForm(*form);
	otot.signForm(*form);
	toto.signForm(*form);
	otot.executeForm(*form);
	toto.executeForm(*form);
	std::cout << std::endl;
	
	delete form;
}
