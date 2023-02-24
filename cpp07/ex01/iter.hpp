#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U>
void iter(T* array, U size, void (*func)(T&))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void print(T& to_print)
{
	std::cout << to_print << " ";
}

template<typename T>
void add_one(T& to_add)
{
	to_add++;
}

#endif
