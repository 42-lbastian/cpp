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

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed result;

	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed result;

	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed result;

	result.setRawBits((this->getRawBits() * fixed.getRawBits()) >> this->_nb_fract_bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed result;

	if (fixed._fixed_point == 0)
	{
		std::cout << "Error division by 0" << std::endl;
		return (*this);
	}
	else
	{
		result.setRawBits((this->getRawBits() << this->_nb_fract_bits) / fixed._fixed_point);
		return (result);
	}
}

Fixed Fixed::operator++(int)
{
	Fixed result;

	result.setRawBits(this->_fixed_point++);
	return (result);
}

Fixed Fixed::operator++(void)
{
	Fixed result;

	result.setRawBits(++this->_fixed_point);
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed result;

	result.setRawBits(this->_fixed_point--);
	return (result);
}

Fixed Fixed::operator--(void)
{
	Fixed result;

	result.setRawBits(--this->_fixed_point);
	return (result);
}

bool Fixed::operator>(const Fixed& fixed)
{
	if (this->_fixed_point > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& fixed)
{
	if (this->_fixed_point < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& fixed)
{
	if (this->_fixed_point >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& fixed)
{
	if (this->_fixed_point <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed& fixed)
{
	if (this->_fixed_point == fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& fixed)
{
	if (this->_fixed_point != fixed.getRawBits())
		return (true);
	else
		return (false);
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

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}
