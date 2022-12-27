#include "Harl.hpp"

int main(void)
{
	Harl harl = Harl();
	
	std::cout << "Incorrect Level" << std::endl;
	harl.complain("IncorrectLevel");

	std::cout << std::endl << "Error" << std::endl;
	harl.complain("error");

	std::cout << std::endl << "Debug" << std::endl;
	harl.complain("debug");

	std::cout << std::endl << "Info" << std::endl;
	harl.complain("info");

	std::cout << std::endl << "Warning" << std::endl;
	harl.complain("warning");
}
