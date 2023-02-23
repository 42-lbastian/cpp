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

	std::cout << "max(" << nb1 << ", " << nb2 << ") = " << max(nb1, nb2) << std::endl;
	std::cout << "min(" << nb1 << ", " << nb2 << ") = " << min(nb1, nb2) << std::endl;
	std::cout << std::endl;

	std::cout << "max(" << char1 << ", " << char2 << ") = " << max(char1, char2) << std::endl;
	std::cout << "min(" << char1 << ", " << char2 << ") = " << min(char1, char2) << std::endl;
	std::cout << std::endl;

	std::cout << "max(" << str1 << ", " << str2 << ") = " << max(str1, str2) << std::endl;
	std::cout << "min(" << str1 << ", " << str2 << ") = " << min(str1, str2) << std::endl;
	std::cout << std::endl;

	std::cout << "max(" << f1 << ", " << f2 << ") = " << max(f1, f2) << std::endl;
	std::cout << "min(" << f1 << ", " << f2 << ") = " << min(f1, f2) << std::endl;
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
