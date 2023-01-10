#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{

public:
	Contact();
	~Contact(void);

	void		cpp_print_info(void) const;
	void		cpp_set_contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string secret);
	std::string	cpp_get_first_name() const;
	std::string	cpp_get_last_name() const;
	std::string	cpp_get_nickname() const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};


#endif
