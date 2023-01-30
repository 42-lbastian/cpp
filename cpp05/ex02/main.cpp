#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat toto(3, "Toto");
	Bureaucrat otot(150, "Otot");
	ShrubberyCreationForm shrub("shrubi2");
	RobotomyRequestForm robototo("Robototo");
	PresidentialPardonForm pardon("Toto");
	
	std::cout << std::endl;
	toto.executeForm(shrub);
	otot.signForm(shrub);
	toto.signForm(shrub);
	otot.executeForm(shrub);
	toto.executeForm(shrub);
	std::cout << std::endl;

	toto.executeForm(robototo);
	otot.signForm(robototo);
	toto.signForm(robototo);
	otot.executeForm(robototo);
	toto.executeForm(robototo);
	std::cout << std::endl;

	toto.executeForm(pardon);
	otot.signForm(pardon);
	toto.signForm(pardon);
	otot.executeForm(pardon);
	toto.executeForm(pardon);
	std::cout << std::endl;

}
