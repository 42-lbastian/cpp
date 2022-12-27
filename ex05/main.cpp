#include "Harl.hpp"

int main(void)
{
	Harl harl = Harl();
	
	std::cout << "Incorrect Level" << std::endl;
	harl.complain("IncorrectLevel");

	std::cout << std::endl << "DEBUG" << std::endl;
	harl.complain("DEBUG");

	std::cout << std::endl << "INFO" << std::endl;
	harl.complain("INFO");

	std::cout << std::endl << "WARNING" << std::endl;
	harl.complain("WARNING");

	std::cout << std::endl << "ERROR" << std::endl;
	harl.complain("ERROR");
}
