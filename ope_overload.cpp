#include "ope_overload.hpp"

Over::Over(std::string str): _str(str)
{
}

Over::~Over()
{
}

Over Over::operator+(Over const &over)
{
	Over over2 = Over("YOULALALA");
	return (over2);
}

void Over::operator-(Over &over)
{
	over._str += "ATAK";
}

Over &Over::operator*()
{
	this->_str = "Bubull";
	return ((*this));
}

void Over::print_str(void) const
{
	std::cout << this->_str << std::endl;
}

int main()
{
	Over over = Over("Hello");
	over.print_str();
	over = over + over;
	over.print_str();
	over - over;
	over.print_str();
	over = *over;
	over.print_str();
	return (0);
}
