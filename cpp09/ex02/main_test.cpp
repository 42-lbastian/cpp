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

void ft_merge(std::vector<std::vector<int> >& vect, int low, int hight, int middle)
{
	int i;
	int j;
	std::vector<std::vector<int> > vect_temp;

	i = low;
	j = middle + 1;
	while (i <= middle && j <= hight)
	{
		if (vect[i][0] < vect[j][0])
		{
			//big_res.push_back(vect[i][0]);
			//low_res.push_back(vect[i][1]);
			vect_temp.push_back(vect[i]);
			i++;
		}
		else
		{
			//big_res.push_back(vect[j][0]);
			//low_res.push_back(vect[j][1]);
			vect_temp.push_back(vect[j]);
			j++;
		}
	}
	while (i <= middle)
	{
		//big_res.push_back(vect[i][0]);
		//low_res.push_back(vect[i][1]);
		vect_temp.push_back(vect[i]);
		i++;
	}
	while (j <= hight)
	{
		//big_res.push_back(vect[j][0]);
		//low_res.push_back(vect[j][1]);
		vect_temp.push_back(vect[j]);
		j++;
	}
	for (int i = low; i <= hight; i++)
	{
		//std::cout << "Size: " << vect.size() << " | i: " << i << std::endl;
		//std::cout << "Size temp: " << vect_temp.size() << " | i: " << i << std::endl;
		vect[i][0] = vect_temp[(i - low)][0];
		vect[i][1] = vect_temp[(i - low)][1];
	}
}

void ft_merge_sort(std::vector<std::vector<int> >& vect, int low, int hight)
{
	int middle;

	if (hight > low)
	{
		middle = (low + hight) / 2;
		ft_merge_sort(vect, low, middle);
		ft_merge_sort(vect, middle + 1 , hight);
		ft_merge(vect, low, hight, middle);
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

int ft_get_up(int size)
{
	std::vector<int> jacobsthal;

	ft_build_jacobsthal(jacobsthal, size);
	if (jacobsthal[jacobsthal.size() - 1] > size)
		return (size);
	else
		return (jacobsthal[jacobsthal.size() - 1]);
}

int ft_binary_search(std::vector<int> vect, int low, int hight, int value)
{
	int middle;

	if (low > hight)
	{
		if (value > vect[low])
			return (low + 1);
		else
			return (low);
	}
	middle = (low + hight) / 2;
	if (value > vect[middle])
		return (ft_binary_search(vect, middle + 1, hight, value));
	else if (value == vect[middle])
		return (middle + 1);
	return (ft_binary_search(vect, low, middle - 1, value));
}

void ft_binary_insertion(std::vector<int>& big_res, std::vector<int>& low_res)
{
	int index;

	while (low_res.size() != 0)
	{
		for (int hight = ft_get_up(low_res.size()); hight > 0; hight--)
		{
			index = ft_binary_search(big_res, 0, hight - 1, low_res[hight - 1]);
			big_res.insert(big_res.begin() + index, low_res[hight - 1]);
			low_res.erase(low_res.begin() + hight - 1);
		}
	}
}

void ft_add_save(std::vector<int>& big_res, int save)
{
	int i;

	i = 0;
	while (i < (int)big_res.size() && big_res[i] < save)
		i++;
	if (i == (int)big_res.size())
		big_res.push_back(save);
	else
		big_res.insert(big_res.begin() + i, save);
}

void ft_create_big_low_vect(std::vector<int>& big_res, std::vector<int>& low_res, 
			std::vector<std::vector<int> > vect_pair)
{
	for (int i = 0; i < (int)vect_pair.size(); i++)
	{
		big_res.push_back(vect_pair[i][0]);
		low_res.push_back(vect_pair[i][1]);
	}
}

void ft_mi_sort(std::vector<int>& vect)
{
	bool odd_even;
	int save;
	std::vector<std::vector<int> > vect_pair;
	std::vector<int> big_res;
	std::vector<int> low_res;
	
	save = -1;
	odd_even = vect.size() % 2; // true == odd / false == even
	if (odd_even == true)
	{
		save = vect.back();
		vect.pop_back();
	}
	ft_create_pair(vect, vect_pair);
	ft_sort_pair(vect_pair);
	ft_merge_sort(vect_pair, 0, vect_pair.size() - 1);
	ft_create_big_low_vect(big_res, low_res, vect_pair);
	ft_binary_insertion(big_res, low_res);
	for (int i = 0; i < (int)vect.size(); i++)
		vect[i] = big_res[i];
	if (odd_even == true)
		ft_add_save(vect, save);
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
			ft_print_vect(vect);
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
