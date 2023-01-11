#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed a2;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);
	Fixed e(Fixed(30.42f) + Fixed(12));
	Fixed f(Fixed(54.42f) - Fixed(12));

	std::cout << "------ADD------" << std::endl;
	std::cout << b + b << std::endl;
	std::cout << c + c << std::endl;
	std::cout << b + c << std::endl;
	std::cout << e << std::endl;
	
	std::cout << std::endl <<  "------SUB------" << std::endl;
	std::cout << b - b << std::endl;
	std::cout << c - c << std::endl;
	std::cout << b - c << std::endl;
	std::cout << c - b << std::endl;
	std::cout << f << std::endl;

	std::cout << std::endl <<  "------MULT------" << std::endl;
	std::cout << b * b << std::endl;
	std::cout << b * c << std::endl;
	std::cout << Fixed(3.0f) * Fixed(7.0f) << std::endl;


	std::cout << std::endl <<  "------DIV------" << std::endl;
	std::cout << b / b << std::endl;
	std::cout << c / b << std::endl;
	std::cout << Fixed(33.3f) / Fixed(3.0f) << std::endl;
	std::cout << Fixed(33.3f) / Fixed(0) << std::endl;


	std::cout << std::endl <<  "------INCR------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl <<  "------DECR------" << std::endl;
	std::cout << a2 << std::endl;
	std::cout << --a2 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a2-- << std::endl;
	std::cout << a2 << std::endl;

	std::cout << std::endl <<  "------>------" << std::endl;
	if (Fixed(2.3f) > Fixed(2.2f))
		std::cout << "2.3 > 2.2" << std::endl;
	else
		std::cout << "2.3 Fail" << std::endl;
	if (Fixed(2.2f) > Fixed(2.3f))
		std::cout << "2.2 Fail" << std::endl;
	else
		std::cout << "2.2 ! > 2.3" << std::endl;
	if (Fixed(2.3f) > Fixed(2.3f))
		std::cout << "2.3 Same Fail" << std::endl;
	else
		std::cout << "2.3 ! > 2.3" << std::endl;
	
	if (Fixed(2) > Fixed(1))
		std::cout << "2 > 1" << std::endl;
	else
		std::cout << "2 Fail" << std::endl;
	if (Fixed(1) > Fixed(2))
		std::cout << "1 Fail" << std::endl;
	else
		std::cout << "1 ! > 2" << std::endl;
	if (Fixed(2) > Fixed(2))
		std::cout << "2 Same Fail" << std::endl;
	else
		std::cout << "2 ! > 2" << std::endl;

	std::cout << std::endl <<  "------<------" << std::endl;
	if (Fixed(2.2f) < Fixed(2.3f))
		std::cout << "2.2 < 2.3" << std::endl;
	else
		std::cout << "2.2 Fail" << std::endl;
	if (Fixed(2.3f) < Fixed(2.2f))
		std::cout << "2.3 Fail" << std::endl;
	else
		std::cout << "2.3 ! < 2.2" << std::endl;
	if (Fixed(2.3f) < Fixed(2.3f))
		std::cout << "2.3 Same Fail" << std::endl;
	else
		std::cout << "2.3 ! < 2.3" << std::endl;
	
	if (Fixed(1) < Fixed(2))
		std::cout << "1 < 2" << std::endl;
	else
		std::cout << "1 Fail" << std::endl;
	if (Fixed(2) < Fixed(1))
		std::cout << "2 Fail" << std::endl;
	else
		std::cout << "2 ! < 1" << std::endl;
	if (Fixed(2) < Fixed(2))
		std::cout << "2 Same Fail" << std::endl;
	else
		std::cout << "2 ! < 2" << std::endl;

	std::cout << std::endl <<  "------>=------" << std::endl;
	if (Fixed(2.3f) >= Fixed(2.2f))
		std::cout << "2.3 >= 2.2" << std::endl;
	else
		std::cout << "2.3 Fail" << std::endl;
	if (Fixed(2.2f) >= Fixed(2.3f))
		std::cout << "2.2 Fail" << std::endl;
	else
		std::cout << "2.2 ! >= 2.3" << std::endl;
	if (Fixed(2.3f) >= Fixed(2.3f))
		std::cout << "2.3 >= 2.3" << std::endl;
	else
		std::cout << "2.3 Same fail" << std::endl;
	
	if (Fixed(2) >= Fixed(1))
		std::cout << "2 >= 1" << std::endl;
	else
		std::cout << "2 Fail" << std::endl;
	if (Fixed(1) >= Fixed(2))
		std::cout << "1 Fail" << std::endl;
	else
		std::cout << "1 ! >= 2" << std::endl;
	if (Fixed(2) >= Fixed(2))
		std::cout << "2 >= 2" << std::endl;
	else
		std::cout << "2 Same Fail" << std::endl;

	std::cout << std::endl <<  "------<=------" << std::endl;
	if (Fixed(2.2f) <= Fixed(2.3f))
		std::cout << "2.2 <= 2.3" << std::endl;
	else
		std::cout << "2.2 Fail" << std::endl;
	if (Fixed(2.3f) <= Fixed(2.2f))
		std::cout << "2.3 Fail" << std::endl;
	else
		std::cout << "2.3 ! <= 2.2" << std::endl;
	if (Fixed(2.3f) <= Fixed(2.3f))
		std::cout << "2.3 <= 2.3" << std::endl;
	else
		std::cout << "2.3 Same fail" << std::endl;
	
	if (Fixed(1) <= Fixed(2))
		std::cout << "1 <= 2" << std::endl;
	else
		std::cout << "1 Fail" << std::endl;
	if (Fixed(2) <= Fixed(1))
		std::cout << "2 Fail" << std::endl;
	else
		std::cout << "2 ! <= 1" << std::endl;
	if (Fixed(2) <= Fixed(2))
		std::cout << "2 <= 2" << std::endl;
	else
		std::cout << "2 Same fail" << std::endl;

	std::cout << std::endl <<  "------==------" << std::endl;
	if (Fixed(2.3f) == Fixed(2.3f))
		std::cout << "2.3 == 2.3" << std::endl;
	else
		std::cout << "2.3 Fail" << std::endl;
	if (Fixed(2) == Fixed(2))
		std::cout << "2 == 2" << std::endl;
	else
		std::cout << "2 Fail" << std::endl;

	std::cout << std::endl <<  "------!=------" << std::endl;
	if (Fixed(2.3f) != Fixed(2.3f))
		std::cout << "2.3 Fail" << std::endl;
	else
		std::cout << "2.3 ! != 2.3" << std::endl;
	if (Fixed(2) != Fixed(2))
		std::cout << "2 Fail" << std::endl;
	else
		std::cout << "2 ! != 2" << std::endl;

	Fixed w(2.2f);
	Fixed x(2.3f);
	Fixed y(2);
	Fixed z(3);

	std::cout << std::endl <<  "------min------" << std::endl;
	std::cout << Fixed::min(w, x) << std::endl;
	std::cout << Fixed::min(y, z) << std::endl;

	std::cout << std::endl <<  "------max------" << std::endl;
	std::cout << Fixed::max(w, x) << std::endl;
	std::cout << Fixed::max(y, z) << std::endl;

	const Fixed wc(2.2f);
	const Fixed yc(2);

	std::cout << std::endl <<  "------min------" << std::endl;
	std::cout << Fixed::min(wc, x) << std::endl;
	std::cout << Fixed::min(yc, z) << std::endl;

	std::cout << std::endl <<  "------max------" << std::endl;
	std::cout << Fixed::max(wc, x) << std::endl;
	std::cout << Fixed::max(yc, z) << std::endl;
	
	Fixed k = Fixed::min(w, x);
	std::cout << k << " " << w << std::endl;
	k.setRawBits(10);
	std::cout << k << " " << w << std::endl;

	return (0);
}
