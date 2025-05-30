#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------------------" << std::endl;

	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "Top: " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Size: " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	
	std::list<int>::iterator it_l = list.begin();
	std::list<int>::iterator ite_l = list.end();
	++it;
	--it;
	while (it_l != ite_l)
	{
		std::cout << *it_l << std::endl;
		++it_l;
	}
	std::list<int> s2(list);
	
	return (0);
}
