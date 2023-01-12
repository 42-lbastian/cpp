#include "ClapTrap.hpp"

int main(void)
{
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
	return (0);
}
