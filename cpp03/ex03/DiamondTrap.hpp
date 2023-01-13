#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& diamondtrap);
		~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap& diamondtrap);
		void attack(const std::string& target);

	private:
		std::string _name;

};


#endif
