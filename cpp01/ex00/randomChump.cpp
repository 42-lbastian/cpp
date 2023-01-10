#include "main.hpp"

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
