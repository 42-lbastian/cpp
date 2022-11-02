#include "PhoneBook.hpp"


int main()
{
	std::string cmd;

	while (1)
	{
		cmd = "";
		while (cmd.length() == 0)
			std::cin >> cmd;
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{}
	}
}
