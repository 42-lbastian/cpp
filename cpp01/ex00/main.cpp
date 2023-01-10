#include "main.hpp"

int	main()
{
	std::cout << "Creation of Toto with newZombie" << std::endl;
	Zombie *bob = newZombie("Toto");
	bob->announce();
	delete bob;

	std::cout << std::endl << "Creation of Tutu with randomChump" << std::endl;
	randomChump("Tutu");
	return (0);
}
