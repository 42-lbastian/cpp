#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	scav.takeDamage(7);
	scav.attack("Tata");
	return (0);
}
