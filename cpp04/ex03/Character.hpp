#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define NB_INVENTORY 4

class Character: public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(const Character& character);
		~Character();
		Character& operator=(const Character& character);
		const std::string& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		int         _inventory_stock[NB_INVENTORY];
		AMateria*   _inventory[NB_INVENTORY];
		void		_init_inventory(void);
		int			_find_empty_inventory(void);
};

#endif
