#include "Convert.hpp"

Convert::Convert(void)
{
	std::cout << "Default Constructor Convert" << std::endl;
}

Convert::Convert(const Convert& convert)
{
	std::cout << "Copy Constructor Convert" << std::endl;
	(*this) = convert;
}

Convert::~Convert(void)
{
	std::cout << "Destructor Convert" << std::endl;
}

Convert& Convert::operator=(const Convert& convert)
{
	(void)convert;
	std::cout << "Copy operator Convert" << std::endl;
	return (*this);
}

void Convert::convert(const std::string str)
{
	std::cout << str << std::endl;
}

void Convert::str_to_char(const std::string str)
{
	char c;

	if (str.length() > 1)
		std::cout << "char impossible" << std::endl;
	else
	{
	}
}
