#include "PmergeMe.hpp"
#include "vector.hpp"
#include "deque.hpp"
#include <ctime>
#include <iomanip>

void PmergeMe(std::vector<int>& vect, std::deque<int>& deq)
{
	clock_t start_vect;
	clock_t end_vect;
	clock_t start_deq;
	clock_t end_deq;
	double time_taken_vect;
	double time_taken_deq;
	std::cout << "Before Vector: ";
	ft_print_vect(vect);
	std::cout << "---------------------" << std::endl << std::endl;
	std::cout << "Before Deque: ";
	ft_print_deq(deq);
	std::cout << "---------------------" << std::endl << std::endl;
	start_vect = clock();
	ft_mi_sort(vect);
	end_vect = clock();
	start_deq = clock();
	ft_mi_sort(deq);
	end_deq = clock();
	std::cout << "Sort Vector: ";
	ft_print_vect(vect);
	std::cout << "---------------------" << std::endl << std::endl;
	std::cout << "Sort Deque: ";
	ft_print_deq(deq);
	std::cout << "---------------------" << std::endl << std::endl;
	time_taken_vect = double(end_vect - start_vect) / double(CLOCKS_PER_SEC);
	std::cout << "Vect time: " << std::fixed << time_taken_vect << 
		std::setprecision(5) << " seconds" << std::endl;
	time_taken_deq = double(end_deq - start_deq) / double(CLOCKS_PER_SEC);
	std::cout << "Deque time: " << std::fixed << time_taken_deq << 
		std::setprecision(5) << " seconds" << std::endl;
}
