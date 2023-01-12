#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap& fragtrap);
		~FragTrap(void);
		FragTrap& operator=(FragTrap& fragtrap);
		void attack(const std::string& target);
		void highFivesGuys(void);
};





#endif
