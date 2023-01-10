#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destroyed" << std::endl;
}

void	PhoneBook::cpp_add_contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string secret, int index)
{
	this->_contact[index].cpp_set_contact(fname, lname, nickname, nb, secret);
}

void	PhoneBook::cpp_print_contact(int index) const
{
	this->_contact[index].cpp_print_info();
}

void	PhoneBook::cpp_print_line(int nb_contact) const
{
	int i;

	i = 0;
	while (i < 8 && i < nb_contact)
	{
		std::cout << '|' << "         " << i + 1 << "|";
		cpp_print_layout(this->_contact[i].cpp_get_first_name());
		cpp_print_layout(this->_contact[i].cpp_get_last_name());
		cpp_print_layout(this->_contact[i].cpp_get_nickname());
		std::cout << std::endl;
		i++;
	}
}
