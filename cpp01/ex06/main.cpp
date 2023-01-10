#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl = Harl();
	
	if (argc != 2)
	{
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
	else
		harl.filter(std::string(argv[1]));		
}
