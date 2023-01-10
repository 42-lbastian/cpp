#include <iostream>
#include "Class.hpp"

Class::Class(int nb, char c, float f) : nb(nb), c(c), f(f), _nb(nb)
{
	std::cout << "Creation" << std::endl;
	std::cout << "nb " << this->nb << " char " << this->c << " float " << this->f << std::endl;
}

Class::~Class(void)
{
	std::cout << "Destruction" << std::endl;
}

void Class::ft_print() const
{
	std::cout << "Grump!" << std::endl;
	std::cout << "Public " << this->nb << std::endl;
}

int	Class::ft_getNb(void) const
{
	return (this->_nb);
}

void Class::ft_setNb(int value)
{
	this->_nb = value;
}

int main(void)
{
	Class testc(42, '4', 4.2);
	
	std::cout << testc.ft_getNb() << std::endl;
	testc.ft_setNb(13);
	std::cout << testc.ft_getNb() << std::endl;

	testc.ft_print();
	return (0);
}
