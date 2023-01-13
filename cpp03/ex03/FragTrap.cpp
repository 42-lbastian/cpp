#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default Constructor void FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_point_original = 100;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_dmg = 30;
	std::cout << "Default Constructor FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap& fragtrap)
{
	std::cout << "Copy Constructor FragTrap" << std::endl;
	(*this) = fragtrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& fragtrap)
{
	std::cout << "Overload Constructor FragTrap" << std::endl;
	if (this != &fragtrap)
	{
		this->_name = fragtrap._name;
		this->_hit_point_original = fragtrap._hit_point_original;
		this->_hit_point = fragtrap._hit_point;
		this->_energy_point = fragtrap._energy_point;
		this->_attack_dmg = fragtrap._attack_dmg;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->_check_status() == 0)
	{
		this->_energy_point--;
		std::cout << this->_name << " obliterate " << target << ", causing "
			<< this->_attack_dmg << " points of damage ! -- Energy point available: "
			<< this->_energy_point << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	if (this->_check_status() == 0)
	{
		this->_energy_point--;
		std::cout << _name << " rise hand for high five !" << std::endl;
	}
}
