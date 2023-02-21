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

void str_to_char(const std::string str)
{
//	if (str.length() > 1)
//		std::cout << "char impossible" << std::endl;
//	else
//	{
		const char& c = reinterpret_cast<const char&>(str);
		if (c > 0 && c < ' ')
		{
			std::cout << "Non displayable" << std::endl;
			std::cout << c << std::endl;
		}
		else
			std::cout << c << std::endl;
//	}
}

void Convert::convert(const std::string str)
{
	str_to_char(str);
}

