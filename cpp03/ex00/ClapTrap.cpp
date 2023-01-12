#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point_original(10) , _hit_point(10), _energy_point(10), _attack_dmg(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "Copy Constructor Called" << std::endl;
	(*this) = claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << "Overload Constructor Called" << std::endl;
	if ((this) != &claptrap)
	{
		this->_name = claptrap._name;	
		this->_hit_point = claptrap._hit_point;
		this->_energy_point = claptrap._energy_point;
		this->_attack_dmg = claptrap._attack_dmg;	
	}
	return (*this);	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor Called" << std::endl;
}

int ClapTrap::_check_status()
{
	if (this->_hit_point <= 0 && this->_energy_point <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hit point and no energy" << std::endl;
	else if (this->_hit_point <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hit point" << std::endl;
	else if (this->_energy_point <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	else
		return (0);
	return (1);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_check_status() == 0)
	{	
		this->_energy_point--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
			<< this->_attack_dmg << " points of damage ! -- Energy point available: "
			<< this->_energy_point << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hit_point)
		this->_hit_point = 0;
	else
		this->_hit_point -= amount;
	if (this->_hit_point <= 0)
		std::cout << "ClapTrap " << this->_name << " take " << amount 
			<< " damage and don't have hit point remaining -- Energy point available: " 
			<< this->_energy_point << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage and have "
			<< this->_hit_point << " remaining -- Energy point available: " 
			<< this->_energy_point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point > 0)
	{
		this->_energy_point--;
		if (amount + this->_hit_point > this->_hit_point_original)
			this->_hit_point = this->_hit_point_original;
		else
			this->_hit_point += amount;
		if (this->_hit_point == this->_hit_point_original)
			std::cout << "ClapTrap " << this->_name << " repaired of " << amount
				<< " point it's a full reparation, hit point: " << this->_hit_point
				<< " -- Energy point available: " << this->_energy_point << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " repaired of " << amount
				<< " point, hit point: " << this->_hit_point
				<< " -- Energy point available: " << this->_energy_point << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
}
