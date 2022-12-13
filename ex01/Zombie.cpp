#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": killed" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
