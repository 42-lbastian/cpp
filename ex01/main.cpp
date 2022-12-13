#include "PhoneBook.hpp"
#include "main.hpp"
#include <stdlib.h> 

void cpp_string_to_upper(std::string& str)
{
	unsigned long i;

	i = 0;
	while (i < str.length())
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

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

int	cpp_read_index(std::string msg, int& res, int nb_contact)
{
	std::string str;

	str = "";
	while (1)
	{
		std::cout << msg << ": " << std::endl;
		getline(std::cin, str);
		if (std::cin.fail() || std::cin.eof())
			return (1);
		res = std::atoi(str.c_str());
		if (res == 0 || res > nb_contact || res > 8 || res < 1)
			std::cout << "Index invalid\n" << std::endl;
		else
			break;
	}
	return (0);
}

void	cpp_print_layout(std::string str)
{
	int	nb_to_complete;
	std::string new_str;
	
	if (str.length() < 11)
	{
		nb_to_complete = 10 - str.length();
		cpp_print_char(' ', nb_to_complete);
		std::cout << str;
		std::cout << '|';
	}
	else
	{
		new_str = str.substr(0, 9) + ".";
		std::cout << new_str << '|';
	}
}

void	cpp_print_char(char c, int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		std::cout << c;
		i++;
	}
}

int main()
{
	int index;
	int	entry;
	int nb_contact;
	PhoneBook phonebook;
	std::string cmd;
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string nb;
	std::string secret;

	index = 0;
	nb_contact = 0;
	while (1)
	{
		if (cpp_read_arg("Command", cmd))
			return (0);
		cpp_string_to_upper(cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			std::cout << std::endl;
			if (cpp_read_arg("First Name", fname) || cpp_read_arg("Last Name", lname) || cpp_read_arg("Nickname", nickname) || cpp_read_arg("Phone Number", nb) || cpp_read_arg("Darkest Secret", secret))
				return (0);
			phonebook.cpp_add_contact(fname, lname, nickname, nb, secret, index);
			std::cout << std::endl;
			if (index < 7)
				index++;
			else
				index = 0;
			nb_contact++;
		}
		else if (cmd == "SEARCH")
		{
			if (nb_contact > 0)
			{
				cpp_print_char('-', 45);
				std::cout << std::endl;
				phonebook.cpp_print_line(nb_contact);
				cpp_print_char('-', 45);
				std::cout << std::endl;
				std::cout << "Select contact: " << std::endl;
				if (cpp_read_index("Index", entry, nb_contact))
					return (0);
				entry -= 1;
				phonebook.cpp_print_contact(entry);
			}
			else
				std::cout << "No Contact registered" << std::endl << std::endl;
		}

	}
}
