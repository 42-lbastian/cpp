#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

class Span
{
	public:
		Span(void);
		Span(unsigned int nb);
		Span(const Span& span);
		~Span();
		Span& operator=(const Span& span);
		void addNumber(int nb);
		void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		int  shortestSpan(void);
		int  longestSpan(void);
		unsigned int getSize(void);
	
	private:
		std::vector<int> _array;
		unsigned int _size;
};

#endif
