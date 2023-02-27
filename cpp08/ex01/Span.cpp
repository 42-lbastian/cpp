#include "Span.hpp"

Span::Span(void): _size(0)
{
	std::cout << "Default constructor Span" << std::endl;
}

Span::Span(unsigned int nb): _size(nb)
{
	std::cout << "Arg Constructor Span" << std::endl;
}

Span::Span(const Span& span)
{
	std::cout << "Copy Constructor Span" << std::endl;
	(*this) = span;
}

Span::~Span(void)
{
	std::cout << "Destructor Span" << std::endl;
}

Span& Span::operator=(const Span& span)
{
	if (this != &span)
	{
		this->_array = span._array;
		this->_size = span._size;
	}
	return (*this);
}

unsigned int Span::getSize(void)
{
	return (this->_size);
}

void Span::addNumber(int nb)
{
	if (this->_array.size() >= this->_size)
		throw std::exception();
	else
		this->_array.push_back(nb);
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	int size;

	size = 0;
	for (std::vector<int>::iterator it2 = it; it2 != ite; it2++)
		size++;
	if (this->_array.size() + size >= this->_size)
		throw std::exception();	
	this->_array.insert(this->_array.end(), it, ite);
}

int Span::shortestSpan(void)
{
	int shortest;
	int temp;
	int temp2;
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite;

	if (this->_array.size() < 2)
		throw std::exception();
	sort(this->_array.begin(), this->_array.end());
	ite = this->_array.end();
	temp = (*(this->_array.begin() + 1));
	temp2 = (*(this->_array.begin()));
	shortest = temp - temp2;
	for (it = this->_array.begin() + 1; it != ite; it++)
	{
		if (shortest > (*it) - (*(it - 1)))
		{
			temp = (*it);
			temp2 = (*(it - 1));
			shortest = temp - temp2;
		}
	}
	std::cout << "Min nb: " <<  temp2 << " Max nb: " << temp << " Diff: " << temp - temp2 << std::endl;
	return (temp - temp2);
}

int Span::longestSpan(void)
{
	if (this->_array.size() < 2)
		throw std::exception();
	sort(this->_array.begin(), this->_array.end());
	std::cout << "Min nb: " << (*this->_array.begin()) << " Max nb: " << (*(this->_array.end() - 1)) << " Diff: " << (*(this->_array.end() - 1)) - (*this->_array.begin()) << std::endl;
	return ((*(this->_array.end() - 1)) - (*this->_array.begin()));
}
