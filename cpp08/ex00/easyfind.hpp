#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template<typename T>
typename T::const_iterator easyfind(T& container, int to_find)
{
	typename T::const_iterator it = find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw std::exception();
	return (it);
}


#endif
