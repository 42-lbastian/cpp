#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Default Constructor DiamondTrap" << std::endl;
	this->_name = name;
	this->_hit_point = FragTrap::_hit_point;
	this->_hit_point_original = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	std::cout << "Diamond: " << this->_energy_point << " ScavTrap: " << ScavTrap::_energy_point << std::endl;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap& diamondtrap)
{
	std::cout << "Copy Constructor DiamondTrap" << std::endl;
	(*this) = diamondtrap;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& diamondtrap)
{
	if (this != (&diamondtrap))
	{
		this->_name = diamondtrap._name;
		this->_hit_point = diamondtrap._hit_point;
		this->_hit_point_original = diamondtrap._hit_point_original;
		this->_energy_point = diamondtrap._energy_point;
		this->_attack_dmg = diamondtrap._attack_dmg;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
