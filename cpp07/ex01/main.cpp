#include "iter.hpp"

int main(void)
{
	char array_c[4] = {'a', 'b', 'c', 'd'};

	iter(array_c, 4, &print);
	return (0);
}
