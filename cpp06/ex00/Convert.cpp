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

bool is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

int check_str(std::string str)
{
	int size;
	int is_float;
	int i;

	i = 0;
	is_float = 0;
	size = str.length();
	if (size == 1 && is_digit(str[0]) == true)
		return (IS_INT);
	else if (size == 1 && is_digit(str[0]) == false)
		return (IS_CHAR);
	else
	{
		while (i < size && (str[i] == '+' || str[i] == '-'))
			i++;
		if (i == size || i > 1)
			return (IS_STRING);
		for (int j = i; j < size; j++)
		{

			if (str[j] == '.' && is_float == 0)
				is_float = 1;
			else if (str[j] == 'f' && is_float == 1 && j == size - 1)
				return (IS_FLOAT);
			else if ((str[j] == '.' && is_float == 1) || is_digit(str[j]) == false)
				return (IS_STRING);
		}
	}
	if (is_float == 1)
		return (IS_DOUBLE);
	return (IS_INT);
}

void Convert::convert(std::string str)
{
	int i;
	float f;
	float ffract;
	double d;
	double dfract;
	char c;
	int type;
	bool displayable;

	displayable = true;
	c = '0';
	type = check_str(str);
	if (type == IS_CHAR)
		c = str[0];
	std::istringstream(str) >> i;
	std::istringstream(str) >> f;
	std::istringstream(str) >> d;
	ffract = modf(f, &ffract);
	if (ffract != 0)
		displayable = false;
	dfract = modf(d, &dfract);
	if (dfract != 0)
		displayable = false;
	if (type == IS_INT)
		c = static_cast<char>(i);
	else if (type == IS_FLOAT)	
		c = static_cast<char>(f);
	else if (type == IS_DOUBLE)
		c = static_cast<char>(d);
	if (type == IS_STRING || displayable == false)
		std::cout << "char: impossible" << std::endl;
	else if ((c >= 0 && c < ' ') || c == 127 || c < 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	if (type != IS_STRING)
	{
		std::cout << "int: " << i << std::endl;
		if (ffract == 0)
		{
			std::cout << "float: " << f << ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	else if (type == IS_STRING && (str == "-inf" || str == "+inf" || str == "nan"))
	{	
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
	else if (type == IS_STRING && (str == "-inff" || str == "+inff" || str == "nanf"))
	{	
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		str = str.substr(0, str.length() - 1);
		std::cout << "double: " << str << std::endl;

	}
	else
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
