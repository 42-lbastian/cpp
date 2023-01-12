#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string          _name;
		unsigned int         _hit_point_original;
		unsigned int         _hit_point;
		unsigned int         _energy_point;
		unsigned int         _attack_dmg;
		int			         _check_status(void);
};



#endif
