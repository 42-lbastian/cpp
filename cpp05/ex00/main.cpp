#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat toto(2, "Toto");
	Bureaucrat tutu(toto); 

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
	std::cout << std::endl;

	std::cout << tutu << std::endl;

	std::cout << std::endl;
	try
	{
		Bureaucrat titi(0, "Titi");
	}
	catch (Bureaucrat::GradeTooHighException& high)
	{
		std::cout << high.what() << std::endl;
	}

	try
	{
		Bureaucrat otot(151, "Titi");
	}
	catch (Bureaucrat::GradeTooLowException& high)
	{
		std::cout << high.what() << std::endl;
	}

}
