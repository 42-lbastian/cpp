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

std::string cpp_find_replace(std::string str, std::string find, std::string replace)
{
	std::string ret;
	size_t      index_find;
	size_t      index_str;
	size_t      index_ret;

	index_str = 0;
	index_ret = 0;
	ret = "";
	while (str[index_str])
	{
		index_find = str.find(find, index_str);
		while ((index_str < index_find) && str[index_str])
		{
			ret.insert(index_ret, 1, str.at(index_str));
			index_str++;
			index_ret++;
		}
		if (str[index_str])
		{
			ret.insert(index_ret, replace);
			index_str += find.length();
			index_ret += replace.length();
		}
	}
	return (ret);
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
		while (getline(file_in, read_str))
		{
			file_out << cpp_find_replace(read_str, find, replace) << std::endl;
		}
		file_out.close();
		file_in.close();
	}
	else
		std::cout << "File not found" << std::endl;
}
