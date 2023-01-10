#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{	
	Weapon weapon = Weapon("Stick");
	
	std::cout << "Toto is HumanA" << std::endl;
	HumanA toto = HumanA("Toto", weapon);
	std::cout << "Toto fight with Stick:" << std::endl;
	toto.attack();

	weapon.setType("Kaboom");
	std::cout << std::endl << "Toto fight with Kaboom:" << std::endl;
	toto.attack();


	std::cout << std::endl << std::endl << "Titi is HumanB with no weapon" << std::endl;
	HumanB titi = HumanB("Titi");
	std::cout << "Titi with no weapon:" << std::endl;
	titi.attack();

	std::cout << std::endl << "Titi fight with Potato:" << std::endl;
	weapon.setType("Potato");
	titi.setWeapon(weapon);
	titi.attack();
	
	std::cout << std::endl << "Titi fight with Destructor3000 Premium Deluxe:" << std::endl;
	weapon.setType("Destructor3000 Premium Deluxe");
	titi.attack();

	std::cout << std::endl << std::endl << "Tata is HumanB with weapon" << std::endl;
	HumanB tata = HumanB("Tata", weapon);
	weapon.setType("Ratatata");
	tata.attack();


	return (0);
}
