#ifndef OPE_OVERLOAD_HPP 
#define OPE_OVERLOAD_HPP 

#include <iostream>

class Over
{
	public:
		Over(std::string str);
		~Over();
		void print_str(void) const;
		Over operator+(Over const &over);
		void operator-(Over &over);
		Over &operator*();

	private:
		std::string _str;

};

#endif
