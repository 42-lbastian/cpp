#include <iostream>
#include <vector>
#include <limits.h>
#include <stdlib.h>

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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_merge(std::vector<std::vector<int> >& vect, std::vector<int>& big_res,
		std::vector<int>& low_res, int low, int hight, int middle)
{
	int i;
	int j;

	i = low;
	j = middle + 1;
	while (i <= middle && j <= hight)
	{
		if (vect[i][0] < vect[j][0])
		{
			big_res.push_back(vect[i][0]);
			low_res.push_back(vect[i][1]);
			i++;
		}
		else
		{
			big_res.push_back(vect[j][0]);
			low_res.push_back(vect[j][1]);
			j++;
		}
	}
	while (i <= middle)
	{
		big_res.push_back(vect[i][0]);
		low_res.push_back(vect[i][1]);
		i++;
	}
	while (j <= hight)
	{
		big_res.push_back(vect[j][0]);
		low_res.push_back(vect[j][1]);
		j++;
	}
}

void ft_merge_sort(std::vector<std::vector<int> >& vect, std::vector<int>& big_res, 
		std::vector<int>& low_res, int low, int hight)
{
	int middle;

	if (hight > low)
	{
		middle = (low + hight) / 2;
		ft_merge_sort(vect, big_res, low_res, low, middle);
		ft_merge_sort(vect, big_res, low_res, middle + 1 , hight);
		ft_merge(vect, big_res, low_res, low, hight, middle);
	}
}

int ft_create_vect(std::vector<int>& vect, char** argv, int argc)
{
	int nb;

	for (int i = 1; i < argc; i++)
	{
		if (ft_strlen(argv[i]) == 0 || ft_atoi(argv[i], nb))
			return (1);
		else
			vect.push_back(nb);
	}
	return (0);
}

void ft_print_vect(std::vector<std::vector<int> > vect)
{
	for (int i = 0; i < (int)vect.size(); i++)
	{
		for (int j = 0; j < (int)vect[i].size(); j++)
			std::cout << vect[i][j] << " ";
		std::cout << std::endl;
	}
}

void ft_print_vect(std::vector<int> vect)
{
	for (int i = 0; i < (int)vect.size(); i++)
			std::cout << vect[i] << " ";
	std::cout << std::endl;
}

void ft_sort_pair(std::vector<std::vector<int> >& vect_pair)
{
	int temp;

	for (int i = 0; i < (int)vect_pair.size(); i++)
	{
		if (vect_pair[i][0] < vect_pair[i][1])
		{
			temp = vect_pair[i][1];
			vect_pair[i][1] = vect_pair[i][0];
			vect_pair[i][0] = temp;
		}
	}
}

void ft_create_pair(const std::vector<int>& vect, std::vector<std::vector<int> >& vect_pair)
{
	std::vector<int> vect_temp;
	for (int i = 0; i < (int)vect.size(); i++)
	{
		vect_temp.push_back(vect[i]);
		i++;
		vect_temp.push_back(vect[i]);
		vect_pair.push_back(vect_temp);
		vect_temp.pop_back();
		vect_temp.pop_back();
	}
}

void ft_build_jacobsthal(std::vector<int>& jacobsthal, int size)
{
	jacobsthal.push_back(0);
	jacobsthal.push_back(1);
	for (int i = 2; i < size; i++)
		jacobsthal.push_back(((jacobsthal[i - 2]) * 2) + jacobsthal[i - 1]);
}

void ft_mi_sort(std::vector<int>& vect)
{
	bool odd_even;
	int save;
	std::vector<std::vector<int> > vect_pair;
	std::vector<int> big_res;
	std::vector<int> low_res;
	std::vector<int> jacobsthal;

	save = -1;
	odd_even = vect.size() % 2; // true == odd / false == even
	if (odd_even == true)
	{
		save = vect.back();
		vect.pop_back();
	}
	ft_create_pair(vect, vect_pair);
		//ft_print_vect(vect_pair);
		//std::cout << "------------" << std::endl;
	ft_sort_pair(vect_pair);
		//ft_print_vect(vect_pair);
		std::cout << save << std::endl;
	ft_merge_sort(vect_pair, big_res, low_res, 0, vect_pair.size() - 1);
		//ft_print_vect(big_res);
		//ft_print_vect(low_res);
	big_res.insert(big_res.begin(), low_res[0]);
	low_res.erase(low_res.begin());
	ft_build_jacobsthal(jacobsthal, (int)low_res.size());
}



///////////////////////////////////CHECK VALEUR UNIQUE

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::vector<int> vect;
		if (ft_create_vect(vect, argv, argc) == 0)
		{
			ft_mi_sort(vect);
		}
		else
		{
			std::cout << "Invalid number in argument" << std::endl;
			return (1);
		}
	}
	else
		std::cout << "No argument" << std::endl;
	return (0);
}
