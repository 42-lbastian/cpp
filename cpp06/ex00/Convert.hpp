#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
	public:
		Convert(void);
		~Convert(void);
		Convert(const Convert& convert);
		Convert& operator=(const Convert& convert);
		static void convert(const std::string str);
};



#endif
