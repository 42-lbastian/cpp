#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		int   getRawBits(void) const;
		void  setRawBits(int const raw);
		float toFloat(void) const;
		int   toInt(void) const;

	private:
		int _fixed_point;
		static const int _nb_fract_bits = 8;
};


#endif
