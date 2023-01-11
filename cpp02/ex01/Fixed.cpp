#include "Fixed.hpp"


Fixed::Fixed(void): _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb): _fixed_point(nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = (nb << this->_nb_fract_bits);
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf((nb * ((float)(1 << this->_nb_fract_bits))));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fixed_point = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point >> this->_nb_fract_bits);
}

float Fixed::toFloat(void) const
{
	return ((((float)this->_fixed_point) / ((float)(1 << this->_nb_fract_bits))));
}
