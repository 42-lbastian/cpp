#include "PhoneBook.hpp"
#include "main.hpp"
#include <stdlib.h> 

void	ft_read_arg(std::string msg, std::string& res)
{
	while (1)
	{
		res = "";
		std::cout << msg << ": " << std::endl;
		//std::cin >> res;
		getline(std::cin, res);
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore();
		}
		else if (!res.empty())
			break;

	}

//	if (std::cin.eof())
//	{
//		std::cout << "EOF" << std::endl;
//		exit(0);
//	}
}

void	ft_print_layout(std::string str)
{
	int	nb_to_complete;
	std::string new_str;
	
	if (str.length() < 11)
	{
		nb_to_complete = 10 - str.length();
		std::cout << str;
		ft_print_char(' ', nb_to_complete);
		std::cout << '|';
	}
	else
	{
		new_str = str.substr(0, 9) + ".";
		std::cout << new_str << '|';
	}
}

void	ft_print_char(char c, int nb)
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
		ft_read_arg("Command", cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			std::cout << std::endl;
			ft_read_arg("File Name", fname);
			ft_read_arg("Last Name", lname);
			ft_read_arg("Nickname", nickname);
			ft_read_arg("Phone Number", nb);
			ft_read_arg("Darkest Secret", secret);
			phonebook.ft_add_contact(fname, lname, nickname, nb, secret, index);
			std::cout << std::endl;
			if (index < 7)
				index++;
			else
				index = 0;
			nb_contact++;
		}
		else if (cmd == "SEARCH")
		{
			ft_print_char('-', 45);
			std::cout << std::endl;
			phonebook.ft_print_line(nb_contact);
			ft_print_char('-', 45);
			std::cout << std::endl;
			std::cout << "Select contact: " << std::endl;
			while (1)
			{
				std::cin >> entry;
				if (std::cin)
				{
					std::cin.clear();
					std::cin.ignore();
					break;
				}
				std::cin.clear();
				std::cin.ignore();
			}
			if (entry < nb_contact && entry < 8 && entry > -1)
				phonebook.ft_print_contact(entry);
			else
				std::cout << "Contact invalid" << std::endl << std::endl;
		}

	}
}
