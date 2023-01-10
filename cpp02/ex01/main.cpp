#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;


	std::cout << "Int a: " << a.toInt() << std::endl;
	std::cout << "Int b: " << b.toInt() << std::endl;
	std::cout << "Int c: " << c.toInt() << std::endl;
	std::cout << "Int d: " << d.toInt() << std::endl;

	return (0);
}
