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

int ft_get_up(int size)
{
	std::deque<int> jacobsthal;

	ft_build_jacobsthal(jacobsthal, size);
	if (jacobsthal[jacobsthal.size() - 1] > size)
		return (size);
	else
		return (jacobsthal[jacobsthal.size() - 1]);
}

void ft_build_jacobsthal(std::vector<int>& jacobsthal, int size)
{
	jacobsthal.push_back(0);
	jacobsthal.push_back(1);
	for (int i = 2; i < size; i++)
		jacobsthal.push_back(((jacobsthal[i - 2]) * 2) + jacobsthal[i - 1]);
}
