#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Default Constructor Character" << std::endl;
	this->_init_inventory();
}

Character::Character(std::string name):_name(name)
{
	std::cout << "String Constructor Character" << std::endl;
	this->_init_inventory();
}

Character::Character(const Character& character)
{
	std::cout << "Copy Constructor Character" << std::endl;
	(*this) = character;
}

Character::~Character(void)
{
	std::cout << "Destructor Character" << std::endl;
}

Character&  Character::operator=(const Character& character)
{
	if (this != &character)
	{
		this->_name = character._name;
		for (int i = 0; i < NB_INVENTORY; i++)
		{
			this->_inventory_stock[i] = character._inventory_stock[i];
			this->_inventory[i] = character._inventory[i];
		}
	}
	return ((*this));
}

void Character::_init_inventory(void)
{
	for (int i = 0; i < NB_INVENTORY; i++)
		this->_inventory_stock[i] = 0;
}

int Character::_find_empty_inventory(void)
{
	for (int i = 0; i < NB_INVENTORY; i++)
	{
		if (this->_inventory_stock[i] == 0)
		{
			this->_inventory_stock[i] = 1;
			return (i);
		}
	}
	return (-1);
}

const std::string& Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int index;

	index = this->_find_empty_inventory();
	if (index == -1)
		std::cout << "No inventory slot available" << std::endl;
	else
	{
		std::cout << "Materia " << m->getType() << " is equiped in slot " << index << std::endl;
		this->_inventory[index] = m;
	}
			
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < NB_INVENTORY)
	{
		if (this->_inventory_stock[idx] == 0)
			std::cout << "Slot " << idx << " is already empty" << std::endl;
		else
		{
			this->_inventory_stock[idx] = 0;
		}
	}
	else
		std::cout << "Unequip index invalid" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
}
