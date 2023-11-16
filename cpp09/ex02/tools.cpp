#include "tools.hpp"

int ft_atoi(const std::string str, int& nb)
{
	int i;
	long test;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	test = atol(str.c_str());
	if (i > 9 && test > INT_MAX)
		return (2);
	nb = atoi(str.c_str());
	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
