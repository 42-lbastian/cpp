#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template<typename T, class container=std::deque<T> >
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void)
		{
			std::cout << "Default Contructor MutantStack" << std::endl;
		}

		MutantStack(const MutantStack<T>& mutantstack)
		{
			std::cout << "Copy Constructor MutantStack" << std::endl;
			(*this) = mutantstack;
		}

		~MutantStack(void)
		{
			std::cout << "Destructor MutantStack" << std::endl;
		}

		MutantStack<T>& operator=(const MutantStack<T>& mutantstack)
		{
			(void)mutantstack;
			return (*this);
		}
		
		typename container::iterator begin(void)
		{
			return (this->c.begin());
		}

		typename container::iterator end(void)
		{
			return (this->c.end());
		}

		typedef typename container::iterator iterator;
};

#endif
