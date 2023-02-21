#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		Convert::convert(str);
	}
}
