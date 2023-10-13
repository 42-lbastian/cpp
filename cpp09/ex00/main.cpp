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

int ft_check_date(const int year, const int month, const int day)
{
	int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		if (month == 2 && day == 29)
			return (0);
	if (month == 0 || month > 12)
		return (1);
	if (day == 0 || day > days_month[month - 1])
		return (1);
	return (0);
}

int ft_exit_read(std::fstream& sfile, const std::string str, const std::string msg)
{
	std::cout << "Error " << msg << ": " << str << std::endl;
	sfile.close();
	return (1);
}

int ft_read_base_data(std::list<Data>& lst)
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
				return (ft_exit_read(sfile, ss.str(), ""));
			std::getline(ss, str, '-');
			if (ft_atoi(str, month))
				return (ft_exit_read(sfile, ss.str(), ""));
			std::getline(ss, str, ',');
			if (ft_atoi(str, day))
				return (ft_exit_read(sfile, ss.str(), ""));
			std::getline(ss, str, '\n');
			if (ft_atof(str, amount))
				return (ft_exit_read(sfile, ss.str(), ""));
			if (ft_check_date(year, month, day))	
				return (ft_exit_read(sfile, ss.str(), "Date Invalid"));
			lst.push_back(Data(year, month, day, amount));
		}
		sfile.close();
	}
	else
	{
		std::cout << "Wrong Base Database File Name" << std::endl;
		return (1);
	}
	return (0);
}

void ft_find_date(const int& year, const int& month, const int& day, const double& amount, 
				std::list<Data> lst)
{
	std::list<Data>::iterator it;

	it = lst.begin();
	while (it != lst.end())
	{
		if (it->getYear() >= year && it->getMonth() >= month && it->getDay() >= day)
			break;
		it++;
	}
	if (!(it->getYear() == year && it->getMonth() == month && it->getDay() == day))
		it--;
	std::cout << year << "-" << month << "-" << day << " => " << amount << " = " << amount * it->getAmount() << std::endl;

}

void ft_read_compare_data(char **argv, const std::list<Data>& lst)
{
	std::fstream sfile;
	std::string str;
	int year;
	int month;
	int day;
	double amount;
	int error;

	sfile.open(argv[1], std::ios::in);
	if (sfile.is_open() == true)
	{
		std::getline(sfile, str);
		while (std::getline(sfile, str))
		{
			error = 0;
			std::stringstream ss(str);
		
			std::getline(ss, str, '-');
			if (ft_atoi(str, year))
			{
				std::cout << "Year Error: " << ss.str() << std::endl;
				error = 1;
			}
			std::getline(ss, str, '-');
			if (error == 0 && ft_atoi(str, month))
			{
				std::cout << "Month Error: " << ss.str() << std::endl;
				error = 1;
			}
			std::getline(ss, str, ' ');
			if (error == 0 && ft_atoi(str, day))
			{
				std::cout << "Day Error: " << ss.str() << std::endl;
				error = 1;
			}
			std::getline(ss, str, ' ');
			std::getline(ss, str, '\n');
			if (error == 0 && ft_atof(str, amount))
			{
				std::cout << "Amount Error: " << ss.str() << std::endl;
				error = 1;
			}
			if (error == 0 && ft_check_date(year, month, day))
			{
				std::cout << "Date Invalid: " << ss.str() << std::endl;
				error = 1;
			}
			if (error == 0)
				ft_find_date(year, month, day, amount, lst);
		}
		sfile.close();
	}
	else
		std::cout << "Wrong Compare Database File Name" << std::endl;
}
 
void ft_print_lst(std::list<Data>& lst)
{
	for (std::list<Data>::iterator it = lst.begin(); it != lst.end(); it++)
		it->print();
}

int main(int argc, char **argv)
{
	std::list<Data> lst;
	
	if (argc != 2)
		std::cout << "Argument Error" << std::endl;
	else if (ft_read_base_data(lst) == 0)
		ft_read_compare_data(argv, lst);
	
	//std::cout << ft_count_days(2004, 2, 1) - ft_count_days(2000, 2, 1) << std::endl;
	//std::cout << ft_count_days(2023, 7, 2) << std::endl;	
	
	return (0);
}
