#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int nb1;
	int nb2;
	char char1;
	char char2;
	std::string str1;
	std::string str2;
	float f1;
	float f2;

	nb1 = 21;
	nb2 = 42;
	char1 = 'a';
	char2 = 'z';
	str1 = "ABC";
	str2 = "XYZ";
	f1 = 42.21;
	f2 = 21.42;

	std::cout << "max between " << nb1 << " and " << nb2 << " is: " << max(nb1, nb2) << std::endl;
	std::cout << "min between " << nb1 << " and " << nb2 << " is: " << min(nb1, nb2) << std::endl;
	std::cout << std::endl;

	std::cout << "max between " << char1 << " and " << char2 << " is: " << max(char1, char2) << std::endl;
	std::cout << "min between " << char1 << " and " << char2 << " is: " << min(char1, char2) << std::endl;
	std::cout << std::endl;

	std::cout << "max between " << str1 << " and " << str2 << " is: " << max(str1, str2) << std::endl;
	std::cout << "min between " << str1 << " and " << str2 << " is: " << min(str1, str2) << std::endl;
	std::cout << std::endl;

	std::cout << "max between " << f1 << " and " << f2 << " is: " << max(f1, f2) << std::endl;
	std::cout << "min between " << f1 << " and " << f2 << " is: " << min(f1, f2) << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "Nb1 is " << nb1 << " Nb2 is " << nb2 << std::endl;
	swap(nb1, nb2);
	std::cout << "Nb1 is " << nb1 << " Nb2 is " << nb2 << std::endl;
	std::cout << std::endl;
	
	std::cout << "Char1 is " << char1 << " Char2 is " << char2 << std::endl;
	swap(char1, char2);
	std::cout << "Char1 is " << char1 << " Char2 is " << char2 << std::endl;
	std::cout << std::endl;

	std::cout << "String1 is " << str1 << " String2 is " << str2 << std::endl;
	swap(str1, str2);
	std::cout << "String1 is " << str1 << " String2 is " << str2 << std::endl;
	std::cout << std::endl;

	std::cout << "Float1 is " << f1 << " Float2 is " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "Float1 is " << f1 << " Float2 is " << f2 << std::endl;


	return (0);
}
