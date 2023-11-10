#include <iostream>
#include "PmergeMe.hpp"
#include "vector.hpp"
#include "deque.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::vector<int> vect;
		std::deque<int> deq;
		if (ft_create_vect(vect, argv, argc) == 0 && ft_create_deq(deq, argv, argc) == 0)
			PmergeMe(vect, deq);
		else
		{
			std::cout << "Invalid number in argument" << std::endl;
			return (1);
		}
	}
	else
		std::cout << "No argument" << std::endl;
	return (0);
}
