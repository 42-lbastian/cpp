#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of str:\t\t" << &str << std::endl;
	std::cout << "Memory address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:\t" << &stringREF << std::endl;

	std::cout << "Value of str:\t\t" << str << std::endl; 
	std::cout << "Value of stringPTR:\t" << *stringPTR << std::endl; 
	std::cout << "Value of stringREF:\t" << stringREF << std::endl; 

	return (0);
}
