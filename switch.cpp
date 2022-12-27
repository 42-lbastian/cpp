#include <iostream>

int main(void)
{
	int nb;

	nb = 5;
	switch (nb)
	{
		case 1:
			std::cout << "1" << std::endl;
			break;
		case 5:
			std::cout << "Bingo" << std::endl;
		case 7:
			std::cout << "Rng" << std::endl;
			break;
		default:
			std::cout << "Loser" << std::endl;
	}
}
