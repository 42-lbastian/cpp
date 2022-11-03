#include "Contact.hpp"

Contact::Contact()
{
	//std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	//std::cout << "Contact Destroyed" << std::endl;
}

void Contact::ft_print_info(void) const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
	std::cout << std::endl;
}


void Contact::ft_set_contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string secret)
{
	this->_first_name = fname;
	this->_last_name = lname;
	this->_nickname = nickname;
	this->_phone_number = nb;
	this->_darkest_secret = secret;
}

std::string	Contact::ft_get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::ft_get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::ft_get_nickname(void) const
{
	return (this->_nickname);
}
