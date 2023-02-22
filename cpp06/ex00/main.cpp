#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		Convert::convert(str);
	}
	else
	{
		std::cout << "--Value 0" << std::endl;
		Convert::convert("0");
		std::cout << std::endl;

		std::cout << "--Value 35" << std::endl;
		Convert::convert("35");
		std::cout << std::endl;

		std::cout << "--Value -1" << std::endl;
		Convert::convert("-1");
		std::cout << std::endl;

		std::cout << "--Value 42.0" << std::endl;
		Convert::convert("42.0");
		std::cout << std::endl;

		std::cout << "--Value 42.0f" << std::endl;
		Convert::convert("42.0f");
		std::cout << std::endl;

		std::cout << "--Value 42.5" << std::endl;
		Convert::convert("42.5");
		std::cout << std::endl;

		std::cout << "--Value 42.5f" << std::endl;
		Convert::convert("42.5f");
		std::cout << std::endl;

		std::cout << "--Value nanf" << std::endl;
		Convert::convert("nanf");
		std::cout << std::endl;

		std::cout << "--Value nan" << std::endl;
		Convert::convert("nan");
		std::cout << std::endl;

		std::cout << "--Value Nawak" << std::endl;
		Convert::convert("Nawak");

	}
}
