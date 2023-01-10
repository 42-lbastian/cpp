#include "Canonical.hpp"


Fixed::Fixed(void)
{

}

Fixed::~Fixed(void)
{

}

Fixed::Fixed(int nb, std::string str): _nb(nb), _str(str)
{

}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

void Fixed::print_value(void) const
{
	std::cout << "nb: " << this->_nb << " str: " << this->_str << std::endl;
}

void Fixed::set_nb(int nb)
{
	this->_nb = nb;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	if (this != &fixed)
	{
		this->_nb = fixed._nb;
		this->_str = fixed._str;
	}
	return (*this);
}

int main()
{
	Fixed f1(13, "BOOOH");
	Fixed f2(f1);
	Fixed f3(0, "0");
	std::cout << "f1 Start 13" << std::endl;
	f1.print_value();
	f1.set_nb(21);
	std::cout << "f1 Start 21" << std::endl;
	f1.print_value();
	std::cout << "f2 copy of f1 13" << std::endl;
	f2.print_value();

	f3 = f1;
	f1.set_nb(13);
	std::cout << "f3 ope copy f1 21" << std::endl;
	f3.print_value();
	f3 = f2;
	std::cout << "f3 ope copy f2 13" << std::endl;
	f3.print_value();

}
