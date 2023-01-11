#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Toto");
	clap.attack("Tutu");
	clap.beRepaired(10);
	clap.takeDamage(5);
	clap.beRepaired(10);
	return (0);
}
