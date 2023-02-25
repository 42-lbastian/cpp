#define NB 5
#include "Span.hpp"

int main()
{
	Span span_def;
	Span span_too_much(5);
	Span span(5);
	int nb;
	int nb2;

	try
	{
		span_def.addNumber(10);
	}
	catch (std::exception&)
	{
		std::cout << "addNumber failed" << std::endl;
	}

	try
	{
		for (int i = 0; i < 6; i++)
		{
			span_too_much.addNumber(10);
		}
	}
	catch (std::exception&)
	{
		std::cout << "addNumber failed" << std::endl;
	}

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(11);
	nb = span.shortestSpan();
	nb2 = span.longestSpan();

	std::cout << "short: "  << nb << std::endl;
	std::cout << "long: " << nb2 << std::endl;
	return (0);
}
