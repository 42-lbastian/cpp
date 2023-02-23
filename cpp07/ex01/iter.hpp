#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U, typename V>
void iter(T& array, U& size, V& func)
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void print(T& to_print)
{
	std::cout << to_print << std::endl;
}

#endif
