#ifndef CONTACT_HPP
#define CONTACT

#include <iostream>

class Contact
{

public:
	Contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string, std::string secret);
	~Contact(void);

	void	ft_print_info(void) const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};


#endif
