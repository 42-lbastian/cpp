#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << ": created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": killed" << std::endl;
}

std::string Zombie::cpp_get_name()
{
	return (this->_name);
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
