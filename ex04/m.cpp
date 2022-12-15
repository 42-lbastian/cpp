#include <iostream>
#include <fstream>

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
	std::string   read_str;
	std::string   filename;
	std::string   find;
	std::string   replace;
	std::ofstream file_out;
	std::ifstream file_in;

	if (cpp_read_arg("Filename", filename) || cpp_read_arg("Text to Find", find) || cpp_read_arg("Text replace", replace))
		return (1);
	file_in.open(filename.c_str(), std::ios::in);
	if (file_in.is_open())
	{
		file_out.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
		while (1)
		{
			file_in >> read_str;
			if (read_str.empty())
				break;
			file_out << read_str;
		}
	}
	else
		std::cout << "File not found" << std::endl;
}
