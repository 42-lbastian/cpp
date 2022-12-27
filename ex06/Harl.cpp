#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Creation of Harl" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Destruction of Harl" << std::endl;
}

void Harl::debug(void) const
{
	std::cout << "Debug -- I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "Info -- I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "Warning -- I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "Error -- This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string array_level[NB_CMD] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void        ((Harl::*array_point[4])(void) const)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
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

void Harl::execute_cmd(std::string level, void (Harl::*point_func)(void)const)
{
	std::cout << "[ " << level << " ]" << std::endl;
	(this->*point_func)();
	std::cout << std::endl;
}

void Harl::filter(std::string level)
{
	std::string array_level[NB_CMD] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void        ((Harl::*array_point[4])(void) const)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int         i;

	i = 0;
	while (i < NB_CMD)
	{
		if (array_level[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			this->execute_cmd(array_level[0], array_point[0]);
		case 1:
			this->execute_cmd(array_level[1], array_point[1]);
		case 2:
			this->execute_cmd(array_level[2], array_point[2]);
		case 3:
			this->execute_cmd(array_level[3], array_point[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
