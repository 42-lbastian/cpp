#include <iostream>

void	ft_test_ref(std::string& str)
{
	str += "TATA";
}

int main()
{
	std::string str = "TOTO";

	std::cout << str << std::endl;
	ft_test_ref(str);
	std::cout << str << std::endl;
	return (0);
}
