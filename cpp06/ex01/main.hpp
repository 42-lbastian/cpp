#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

typedef struct	S_data
{
	std::string name;
	int         age;
	float       random;
}				Data;

std::ostream& operator<<(std::ostream& o, const Data& data);

#endif
