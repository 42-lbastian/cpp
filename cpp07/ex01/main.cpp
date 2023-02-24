#include "iter.hpp"
#define NB_ELEM 4 

void add_poney(std::string& str)
{
	str += "_poney";
}

int main(void)
{
	char array_c[NB_ELEM] = {'a', 'b', 'c', 'd'};
	int array_i[NB_ELEM] = {0, 1, 2, 3};
	std::string array_s[NB_ELEM] = {"cat", "dog", "fish", "poupoule"};

	iter(array_c, NB_ELEM, &print);
	std::cout << std::endl;
	iter(array_c, NB_ELEM, &add_one);
	iter(array_c, NB_ELEM, &print);
	std::cout << std::endl;

	iter(array_i, NB_ELEM, &print);
	std::cout << std::endl;
	iter(array_i, NB_ELEM, &add_one);
	iter(array_i, NB_ELEM, &print);
	std::cout << std::endl;

	iter(array_s, NB_ELEM, &print);
	std::cout << std::endl;
	iter(array_s, NB_ELEM, &add_poney);
	iter(array_s, NB_ELEM, &print);
	return (0);
}
