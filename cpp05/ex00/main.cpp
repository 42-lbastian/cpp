#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat toto(2, "Toto");

	std::cout << toto << std::endl;
	try
	{
		toto.incrGrade();
		toto.incrGrade();
	}
	catch (Bureaucrat::GradeTooHighException& high)
	{
		std::cout << high.what() << std::endl;
	}
	std::cout << toto << std::endl;

	std::cout << std::endl;
	Bureaucrat tata(149, "Tata");
	std::cout << tata << std::endl;
	try
	{
		tata.decrGrade();
		tata.decrGrade();
	}
	catch (Bureaucrat::GradeTooLowException& low)
	{
		std::cout << low.what() << std::endl;
	}
	std::cout << tata << std::endl;
}
