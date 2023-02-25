#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(void);
		Span(unsigned int nb);
		Span(const Span& span);
		~Span();
		Span& operator=(const Span& span);
		void addNumber(int nb);
		int  shortestSpan(void);
		int  longestSpan(void);
	
	private:
		std::vector<int> _array;
		unsigned int _size;
};

#endif
