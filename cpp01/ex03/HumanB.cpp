#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{
	this->_weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon& weapon):_name(name), _weapon(&weapon)
{
}

HumanB::~HumanB()
{}

void HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
