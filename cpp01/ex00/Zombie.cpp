#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << ": created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": killed" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
