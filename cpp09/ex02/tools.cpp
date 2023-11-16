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

void ft_build_jacobsthal(std::deque<int>& jacobsthal, int size)
{
	jacobsthal.push_back(0);
	jacobsthal.push_back(1);
	for (int i = 2; i < size; i++)
		jacobsthal.push_back(((jacobsthal[i - 2]) * 2) + jacobsthal[i - 1]);
}

int ft_get_up_deq(int size)
{
	std::deque<int> jacobsthal;

	ft_build_jacobsthal(jacobsthal, size);
	if (jacobsthal[jacobsthal.size() - 1] > (int)size)
		return (size);
	else
		return (jacobsthal[jacobsthal.size() - 1]);
}


int ft_build_jacobsthal(int size)
{
	int result;
	std::vector<int> jacobsthal;
	int i;

	i = 2;
	result = 0;
	jacobsthal.push_back(0);
	jacobsthal.push_back(1);
	jacobsthal.push_back(1);
	jacobsthal.push_back(3);
	jacobsthal.push_back(5);
	jacobsthal.push_back(11);
	jacobsthal.push_back(21);
	jacobsthal.push_back(43);
	jacobsthal.push_back(85);
	jacobsthal.push_back(171);
	jacobsthal.push_back(341);
	jacobsthal.push_back(683);
	jacobsthal.push_back(1365);
	result += jacobsthal[0];
	result += jacobsthal[1];
	while (size > result)
	{
		result += jacobsthal[i];
		i++;
	}
	return (result);
}

int ft_get_up_vect(int size, int real_size)
{
	int jacob;

	jacob = ft_build_jacobsthal(size);
	if (jacob > (int)real_size)
		return (real_size);
	else
		return (jacob);
}

