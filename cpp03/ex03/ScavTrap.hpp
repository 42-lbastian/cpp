#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& scavtrap);
		~ScavTrap(void);
		ScavTrap& operator=(ScavTrap& scavtrap);
		void guardGate(void);
		void attack(const std::string& target);
};





#endif
