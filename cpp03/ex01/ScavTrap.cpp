#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_point_original = 100;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_dmg = 20;
	std::cout << "Default Constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& scavtrap)
{
	std::cout << "Copy Constructor ScavTrap" << std::endl;
	(*this) = scavtrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& scavtrap)
{
	std::cout << "Overload Constructor ScavTrap" << std::endl;
	if (this != &scavtrap)
	{
		this->_name = scavtrap._name;
		this->_hit_point_original = scavtrap._hit_point_original;
		this->_hit_point = scavtrap._hit_point;
		this->_energy_point = scavtrap._energy_point;
		this->_attack_dmg = scavtrap._attack_dmg;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_check_status() == 0)
	{
		this->_energy_point--;
		std::cout << this->_name << " obliterate " << target << ", causing "
			<< this->_attack_dmg << " points of damage ! -- Energy point available: "
			<< this->_energy_point << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (this->_check_status() == 0)
	{
		this->_energy_point--;
		std::cout << _name << " is now in gate keeper mode" << std::endl;
	}
}
