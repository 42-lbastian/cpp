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

int ft_atof(const std::string str, double& nb)
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
				std::cout << "Year Error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, '-');
			if (ft_atoi(str, month))
			{
				std::cout << "Month Error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, ',');
			if (ft_atoi(str, day))
			{
				std::cout << "Day Error: " << ss.str() << std::endl;
				return (1);
			}
			std::getline(ss, str, '\n');
			if (ft_atof(str, amount))
			{
				std::cout << "Amount Error: " << ss.str() << std::endl;
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

int ft_count_leap_years(int year)
{
	int leap;

	leap = 0;
	for (int i = 1; i < year; i++)
	{
		if (year % 4 == 0)
			leap++;
	}
	return (leap);
}

int ft_count_days(int year, int month, int day)
{
	int total;
	int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	total = (year - 1) * 365;
	if (month > 2 || (month == 2 && day == 29))
		total += ft_count_leap_years(year + 1);
	else
		total += ft_count_leap_years(year);
	for (int i = 0; i < month; i++)
		total += days_month[i];
	total += day;
	return (total);	
}

int main(int argc, char **argv)
{
	std::list<Data> lst;
	if (argc != 2)
		std::cout << "Argument Error" << std::endl;
	if (ft_read_data(lst) == 0)
	{
		std::cout << ft_count_days(2023, 7, 2) << std::endl;	
	}
		
	
	(void)argc;
	(void)argv;
	
	return (0);
}
