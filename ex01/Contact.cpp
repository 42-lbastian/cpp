#include "Contact.hpp"

Contact::Contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string, std::string secret):
	_first_name(fname), _last_name(lname), _nickname(nickname), _phone_number(nb), _darkest_secret(secret)
{
	std::cout << "Contact created" << std::endl;
}

void Contact::ft_print_info(void) const
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}
