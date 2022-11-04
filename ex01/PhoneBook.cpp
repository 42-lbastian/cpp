#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destroyed" << std::endl;
}

void	PhoneBook::ft_add_contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string secret, int index)
{
	this->_contact[index].ft_set_contact(fname, lname, nickname, nb, secret);
}

void	PhoneBook::ft_print_contact(int index) const
{
	this->_contact[index].ft_print_info();
}

void	PhoneBook::ft_print_line(int nb_contact) const
{
	int i;

	i = 0;
	while (i < 8 && i < nb_contact)
	{
		std::cout << '|' << i << "         " << "|";
		//if (this->_contact[i].ft_get_first_name().length() < 11)
		//	nb_to_complete = 10 - this->_contact[i].ft_get_first_name().length();
		//std::cout << this->_contact[i].ft_get_first_name();
		//ft_print_char(' ', nb_to_complete);
		//std::cout << '|' << std::endl;
		ft_print_layout(this->_contact[i].ft_get_first_name());
		ft_print_layout(this->_contact[i].ft_get_last_name());
		ft_print_layout(this->_contact[i].ft_get_nickname());
		std::cout << std::endl;
		//std::cout << this->_contact[i].ft_get_last_name() << "|";
		//std::cout << this->_contact[i].ft_get_nickname() << "|" << std::endl;
		i++;
	}
}
