#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		Fixed  operator+(const Fixed& fixed);
		Fixed  operator-(const Fixed& fixed);
		Fixed  operator*(const Fixed& fixed);
		Fixed  operator/(const Fixed& fixed);
		Fixed  operator++(int);
		Fixed  operator++(void);
		Fixed  operator--(int);
		Fixed  operator--(void);
		bool   operator>(const Fixed& fixed);
		bool   operator<(const Fixed& fixed);
		bool   operator>=(const Fixed& fixed);
		bool   operator<=(const Fixed& fixed);
		bool   operator==(const Fixed& fixed);
		bool   operator!=(const Fixed& fixed);
		int           getRawBits(void) const;
		void          setRawBits(int const raw);
		float         toFloat(void) const;
		int           toInt(void) const;
		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

	private:
		int _fixed_point;
		static const int _nb_fract_bits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif
