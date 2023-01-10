#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(int nb, std::string str);
		Fixed(const Fixed &fixed);
		Fixed &operator=(Fixed const &fixed);
		void print_value(void) const;
		void set_nb(int nb);
	
	private:
		int _nb;
		std::string _str;


};


#endif
