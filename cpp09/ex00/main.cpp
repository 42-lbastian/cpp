#include "BitcoinExchange.hpp"

void read_data(std::list<Data>& lst)
{
	lst.push_back(Data(1, 1, 1, 3.5));
}

int main(int argc, char **argv)
{
	std::list<Data> lst;
	read_data(lst);
	
	(void)argc;
	(void)argv;
	
	return (0);
}
