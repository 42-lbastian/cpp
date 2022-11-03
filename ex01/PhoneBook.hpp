#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "main.hpp"

class PhoneBook
{

public:
	PhoneBook(void);
	~PhoneBook();
	

	void	ft_add_contact(std::string fname, std::string lname, std::string nickname, std::string nb, std::string secret, int index);
	void	ft_print_contact(int index) const;
	void	ft_print_line(int nb_contact) const;

private:
	Contact _contact[8];
};

#endif
