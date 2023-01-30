#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat toto(3, "Toto");
	ShrubberyCreationForm shrub("shrubi2");
	RobotomyRequestForm robototo("Robototo");
	PresidentialPardonForm pardon("Toto");

	std::cout << std::endl;
	shrub.exec();
	robototo.exec();
	pardon.exec();
	std::cout << std::endl;

}
