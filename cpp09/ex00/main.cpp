#include "BitcoinExchange.hpp"



void read_data(std::list<Data>& lst)
{
	(void)lst;
	std::fstream sfile;
	std::string str;
	int date;
	float amount;

	sfile.open(DATABASE, std::ios::in);
	if (sfile.is_open() == true)
	{
		while (std::getline(sfile, str))
		{
			std::stringstream ss(str);
		
			std::getline(ss, str, '-');
			std::cout << str << std::endl;
			std::getline(ss, str, '-');
			std::cout << str << std::endl;
			std::getline(ss, str, ',');
			std::cout << str << std::endl;
			std::getline(ss, str, '\n');
			std::cout << str << std::endl;
			
			//std::cout << ss.str() << std::endl;
		}
		sfile.close();
	}
	else
		std::cout << "Wrong Database File Name" << std::endl;
	//lst.push_back(Data(1, 1, 1, 3.5));
}

int main(int argc, char **argv)
{
	std::list<Data> lst;
	read_data(lst);
	
	(void)argc;
	(void)argv;
	
	return (0);
}
