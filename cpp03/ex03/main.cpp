#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "------ClapTrap------" << std::endl;
	ClapTrap clap("Toto");
	clap.attack("Tutu");
	clap.beRepaired(10);
	clap.takeDamage(5);
	clap.beRepaired(10);
	clap.takeDamage(9);
	clap.takeDamage(5);
	clap.attack("Tata");
	clap.attack("Tata");
	clap.beRepaired(2);
	clap.attack("Titi");
	clap.attack("Tata");
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(2);
	clap.attack("Tata");
	clap.beRepaired(2);
	clap.takeDamage(7);
	clap.attack("Tata");

	std::cout << std::endl << "------ScavTrap------" << std::endl;
	ScavTrap scav("Otot");
	scav.guardGate();
	scav.attack("Tutu");
	scav.beRepaired(10);
	scav.takeDamage(5);
	scav.beRepaired(10);
	scav.takeDamage(9);
	scav.takeDamage(5);
	scav.attack("Tata");
	scav.attack("Tata");
	scav.beRepaired(2);
	scav.attack("Titi");
	scav.attack("Tata");
	scav.beRepaired(1);
	scav.beRepaired(1);
	scav.beRepaired(1);
	scav.beRepaired(2);
	scav.attack("Tata");
	scav.beRepaired(2);
	scav.takeDamage(95);
	scav.guardGate();
	scav.attack("Tata");
	for (int i = 0; i < 36; i++)
		scav.beRepaired(1);
	scav.guardGate();
	scav.takeDamage(40);
	scav.attack("Tata");
	scav.guardGate();

	std::cout << std::endl << "------FragTrap------" << std::endl;
	FragTrap frag("Bubulle");
	frag.highFivesGuys();
	frag.attack("Tutu");
	frag.beRepaired(10);
	frag.takeDamage(5);
	frag.beRepaired(10);
	frag.takeDamage(9);
	frag.takeDamage(5);
	frag.attack("Tata");
	frag.attack("Tata");
	frag.beRepaired(2);
	frag.attack("Titi");
	frag.attack("Tata");
	frag.beRepaired(1);
	frag.beRepaired(1);
	frag.beRepaired(1);
	frag.beRepaired(2);
	frag.attack("Tata");
	frag.beRepaired(2);
	frag.takeDamage(95);
	frag.highFivesGuys();
	frag.attack("Tata");
	for (int i = 0; i < 86; i++)
		frag.beRepaired(1);
	frag.highFivesGuys();
	frag.takeDamage(85);
	frag.attack("Tata");
	frag.highFivesGuys();

	std::cout << std::endl << "------DiamondTrap------" << std::endl;
	DiamondTrap diamond("Rex");
	diamond.attack("Tutu");

	return (0);
}
