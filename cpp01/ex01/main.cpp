#include "main.hpp"

int main(int argc, char **argv)
{
	Zombie *zombie_horde;
	int    nb;
	int    i;
	
	i = 0;
	if (argc == 2)
		nb = std::atoi(argv[1]);
	else
		nb = 13;	
	zombie_horde = zombieHorde(nb, "Toto");
	while (i < nb)
	{
		std::cout << "Zombie nb " << i << " ";
		zombie_horde[i].announce();
		i++;
	}
	delete [] zombie_horde;
	return (0);
}
