#include "vector.hpp"
#include "tools.hpp"

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
			vect_temp.push_back(vect[i]);
			i++;
		}
		else
		{
			vect_temp.push_back(vect[j]);
			j++;
		}
	}
	while (i <= middle)
	{
		vect_temp.push_back(vect[i]);
		i++;
	}
	while (j <= hight)
	{
		vect_temp.push_back(vect[j]);
		j++;
	}
	for (int i = low; i <= hight; i++)
	{
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

int ft_jacob_vect(int nb_1, int nb_2, int size)
{
	int jacob;

	jacob = nb_1 + (nb_2 * 2);
	if (jacob < size)
		return (jacob);
	else
		return (size);
}

void ft_binary_insertion(std::vector<std::vector<int> > vect_pair, std::vector<int>& result)
{
	int low;
	int hight;
	int tmp;
	int index;
	int last;

	low = 1;
	hight = 1;
	result.push_back(vect_pair.front()[1]);
	result.push_back(vect_pair.front()[0]);
	while (hight != (int)vect_pair.size())
	{
		tmp = low;
		low = hight;
		hight = ft_jacob_vect(low, tmp, vect_pair.size());
		for (int i = low; i < hight; i++)
			result.push_back(vect_pair[i][0]);
		for (int i = hight - 1; i >= low; i--)
		{
			if (hight == (int)result.size())
				last = hight;
			else
				last = hight + low - 1;
			index = ft_binary_search(result, 0, last, vect_pair[i][1]);
			result.insert(result.begin() + index, vect_pair[i][1]);
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

void ft_mi_sort(std::vector<int>& vect, std::vector<int>& result)
{
	bool odd_even;
	int save;
	std::vector<std::vector<int> > vect_pair;

	if (vect.size() == 1)
	{
		result.push_back(vect.front());
		return ;
	}
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
	ft_binary_insertion(vect_pair, result);
	if (odd_even == true)
		ft_add_save(result, save);
}
