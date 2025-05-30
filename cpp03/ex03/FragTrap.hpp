#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap& fragtrap);
		~FragTrap(void);
		FragTrap& operator=(FragTrap& fragtrap);
		void attack(const std::string& target);
		void highFivesGuys(void);
};





#endif
