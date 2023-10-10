#include "BitcoinExchange.hpp"

int ft_atoi(const std::string str, int& nb)
{
	int i;
	long test;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	test = atol(str.c_str());
	if (i > 9 && test > INT_MAX)
		return (2);
	nb = atoi(str.c_str());
	return (0);
}

int ft_atol(const std::string str, double& nb)
{
	int i;
	int point;

	i = 0;
	point = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (1);
		if (str[i] == '.' && i > 0)
			point++;
		if ((str[i] == '.' && i == 0) || point > 1)
			return (2);
		i++;
	}
	if (str[i - 1] == '.')
		return (3);
	nb = atof(str.c_str());
	if (i >= 9 && nb > INT_MAX)
		return (4);
	return (0);
}

int ft_read_data(std::list<Data>& lst)
{
	std::fstream sfile;
	std::string str;
	int year;
	int month;
	int day;
	double amount;

	sfile.open(DATABASE, std::ios::in);
	if (sfile.is_open() == true)
	{
		std::getline(sfile, str);
		while (std::getline(sfile, str))
		{
			std::stringstream ss(str);
		
			std::getline(ss, str, '-');
			if (ft_atoi(str, year))
			{
				std::cout << "Year error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, '-');
			if (ft_atoi(str, month))
			{
				std::cout << "Month error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, ',');
			if (ft_atoi(str, day))
			{
				std::cout << "Day error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, '\n');
			if (ft_atol(str, amount))
			{
				std::cout << "Amount error: " << ss.str() << std::endl;
				return (1);
			}
			lst.push_back(Data(year, month, day, amount));
		}
		sfile.close();
	}
	else
	{
		std::cout << "Wrong Database File Name" << std::endl;
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	std::list<Data> lst;
	if (ft_read_data(lst) == 0)
	{
		
	}
	else
		std::cout << "Error First Database File" << std::endl;
		
	
	(void)argc;
	(void)argv;
	
	return (0);
}
