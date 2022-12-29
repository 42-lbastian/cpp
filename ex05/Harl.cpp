#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Creation of Harl" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Destruction of Harl" << std::endl;
}

void Harl::_debug(void) const
{
	std::cout << "Debug -- I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) const
{
	std::cout << "Info -- I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) const
{
	std::cout << "Warning -- I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) const
{
	std::cout << "Error -- This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) const
{
	std::string array_level[NB_CMD] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void        ((Harl::*array_point[4])(void) const)= {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int         i;

	i = 0;
	while (i < NB_CMD)
	{
		if (array_level[i] == level)
		{
			(this->*array_point[i])();
			break ;
		}
		i++;
	}
}
