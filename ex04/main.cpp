#include <iostream>

int cpp_read_arg(std::string msg, std::string& res)
{
	while (1)
	{
		res = "";
		std::cout << msg << ": " << std::endl;
		getline(std::cin, res);
		if (std::cin.fail() || std::cin.eof())
			return (1);
		else if (!res.empty())
			break;
	}
	return (0);
}

int main()
{
	std::string filename;
	std::string find;
	std::string replace;

	if (cpp_read_arg("Filename:", filename) || cpp_read_arg("Text to Find:", find) || cpp_read_arg("Text replace:", replace))
		return (1);
	
}
