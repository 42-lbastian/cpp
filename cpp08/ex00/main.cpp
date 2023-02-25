#include "easyfind.hpp"

int main()
{
	std::vector<int> vect;
	std::vector<int>::const_iterator itc_v;
	std::vector<int>::iterator it_v;
	std::vector<int>::iterator ite_v;
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(8);
	ite_v = vect.end();

	std::list<int> list;
	std::list<int>::const_iterator itc_l;
	std::list<int>::iterator it_l;
	std::list<int>::iterator ite_l;
	list.push_back(-1);
	list.push_back(13);
	list.push_front(666);
	ite_l = list.end();

	std::deque<int> deque;
	std::deque<int>::const_iterator itc_d;
	std::deque<int>::iterator it_d;
	std::deque<int>::iterator ite_d;
	deque.push_back(42);
	deque.push_back(21);
	deque.push_front(84);
	ite_d = deque.end();
	
	std::cout << "Print content of vector: ";
	for (it_v = vect.begin(); it_v != ite_v; it_v++)
		std::cout << (*it_v) << " ";
	std::cout << std::endl;
	
	std::cout << "Print content of list: ";
	for (it_l = list.begin(); it_l != ite_l; it_l++)
		std::cout << (*it_l) << " ";
	std::cout << std::endl;
	
	std::cout << "Print content of deque: ";
	for (it_d = deque.begin(); it_d != ite_d; it_d++)
		std::cout << (*it_d) << " ";
	std::cout << std::endl;

	try
	{
		itc_v = easyfind(vect, 5);
		std::cout << (*itc_v) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in vector" << std::endl;
	}

	try
	{
		itc_l = easyfind(list, 666);
		std::cout << (*itc_l) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in list" << std::endl;
	}

	try
	{
		itc_d = easyfind(deque, 42);
		std::cout << (*itc_d) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in deque" << std::endl;
	}

	try
	{
		itc_v = easyfind(vect, 0);
		std::cout << (*itc_v) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in vector" << std::endl;
	}

	try
	{
		itc_l = easyfind(list, 21);
		std::cout << (*itc_l) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in list" << std::endl;
	}

	try
	{
		itc_d = easyfind(deque, 1234);
		std::cout << (*itc_d) << std::endl;
	}
	catch (std::exception&)
	{
		std::cout << "Nb not found in deque" << std::endl;
	}

	return (0);
}
