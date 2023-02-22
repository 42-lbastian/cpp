#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <math.h>
#define IS_FLOAT 0
#define IS_DOUBLE 1
#define IS_INT 2
#define IS_CHAR 3
#define IS_STRING 4

class Convert
{
	public:
		static void convert(std::string str);

	private:
		Convert(void);
		Convert(const Convert& convert);
		~Convert(void);
		Convert& operator=(const Convert& convert);
};



#endif
