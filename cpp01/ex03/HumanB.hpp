#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon& weapon);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon& weapon);
	private:
		std::string _name;
		Weapon *_weapon;

};

#endif
