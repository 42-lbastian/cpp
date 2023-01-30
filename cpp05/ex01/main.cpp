#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat toto(3, "Toto");
	Form form(2, 1, "Formulaire");
	std::cout << form << std::endl;
	toto.signForm(form);
	std::cout << form << std::endl;
	toto.incrGrade();
	toto.signForm(form);
	std::cout << form << std::endl;
	std::cout << std::endl;

	try
	{
		Form form2(0, 1, "Formulaire");
	}
	catch (Form::GradeTooHighException& high)
	{
		std::cout << high.what() << std::endl;
	}
	try
	{
		Form form2(1, 0, "Formulaire");
	}
	catch (Form::GradeTooHighException& high)
	{
		std::cout << high.what() << std::endl;
	}
	try
	{
		Form form2(151, 1, "Formulaire");
	}
	catch (Form::GradeTooLowException& low)
	{
		std::cout << low.what() << std::endl;
	}
	try
	{
		Form form2(15, 151, "Formulaire");
	}
	catch (Form::GradeTooLowException& low)
	{
		std::cout << low.what() << std::endl;
	}
}
