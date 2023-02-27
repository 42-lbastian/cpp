#define NB 50000
#include "Span.hpp"

int main()
{
	Span span_def;
	Span span_too_much(5);
	Span span(5);
	Span span2(NB);
	std::vector<int> vect;
	int nb;
	int nb2;

	try
	{
		span_def.addNumber(10);
	}
	catch (std::exception&)
	{
		std::cout << "addNumber Span_def failed" << std::endl;
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
		std::cout << "addNumber Span_too_much failed" << std::endl;
	}

	srand(time(NULL));	
	for (int i = 1; i < NB; i++)
		vect.push_back(rand());

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	try
	{
		span.addNumber(vect.begin(), vect.end());
		std::cout << "Span addNumber work" << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Too much number in Span" << std::endl;
	}
	try
	{
		span2.addNumber(vect.begin(), vect.end());
		std::cout << "Span2 addNumber work" << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Too much number in Span2" << std::endl;
	}

	std::cout << "Span: " << std::endl;
	nb = span.shortestSpan();
	nb2 = span.longestSpan();

	std::cout << "short: "  << nb << std::endl;
	std::cout << "long: " << nb2 << std::endl;

	std::cout << std::endl;
	std::cout << "Span2: " << std::endl;
	nb = span2.shortestSpan();
	nb2 = span2.longestSpan();

	std::cout << "short: "  << nb << std::endl;
	std::cout << "long: " << nb2 << std::endl;
	std::cout << std::endl;
	return (0);
}
