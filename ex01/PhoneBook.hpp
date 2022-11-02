#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{

public:
	PhoneBook();
	~PhoneBook();

private:
	Contact contact[8];
};

#endif
