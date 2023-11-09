#include "deque.hpp"
#include "tools.hpp"

void ft_merge(std::deque<std::deque<int> >& deq, int low, int hight, int middle)
{
	int i;
	int j;
	std::deque<std::deque<int> > deq_temp;

	i = low;
	j = middle + 1;
	while (i <= middle && j <= hight)
	{
		if (deq[i][0] < deq[j][0])
		{
			deq_temp.push_back(deq[i]);
			i++;
		}
		else
		{
			deq_temp.push_back(deq[j]);
			j++;
		}
	}
	while (i <= middle)
	{
		deq_temp.push_back(deq[i]);
		i++;
	}
	while (j <= hight)
	{
		deq_temp.push_back(deq[j]);
		j++;
	}
	for (int i = low; i <= hight; i++)
	{
		deq[i][0] = deq_temp[(i - low)][0];
		deq[i][1] = deq_temp[(i - low)][1];
	}
}

void ft_merge_sort(std::deque<std::deque<int> >& deq, int low, int hight)
{
	int middle;

	if (hight > low)
	{
		middle = (low + hight) / 2;
		ft_merge_sort(deq, low, middle);
		ft_merge_sort(deq, middle + 1 , hight);
		ft_merge(deq, low, hight, middle);
	}
}

int ft_create_deq(std::deque<int>& deq, char** argv, int argc)
{
	int nb;

	for (int i = 1; i < argc; i++)
	{
		if (ft_strlen(argv[i]) == 0 || ft_atoi(argv[i], nb))
			return (1);
		else
			deq.push_back(nb);
	}
	return (0);
}

void ft_print_deq(std::deque<std::deque<int> > deq)
{
	for (int i = 0; i < (int)deq.size(); i++)
	{
		for (int j = 0; j < (int)deq[i].size(); j++)
			std::cout << deq[i][j] << " ";
		std::cout << std::endl;
	}
}

void ft_print_deq(std::deque<int> deq)
{
	for (int i = 0; i < (int)deq.size(); i++)
			std::cout << deq[i] << " ";
	std::cout << std::endl;
}

void ft_sort_pair(std::deque<std::deque<int> >& deq_pair)
{
	int temp;

	for (int i = 0; i < (int)deq_pair.size(); i++)
	{
		if (deq_pair[i][0] < deq_pair[i][1])
		{
			temp = deq_pair[i][1];
			deq_pair[i][1] = deq_pair[i][0];
			deq_pair[i][0] = temp;
		}
	}
}

void ft_create_pair(const std::deque<int>& deq, std::deque<std::deque<int> >& deq_pair)
{
	std::deque<int> deq_temp;

	for (int i = 0; i < (int)deq.size(); i++)
	{
		deq_temp.push_back(deq[i]);
		i++;
		deq_temp.push_back(deq[i]);
		deq_pair.push_back(deq_temp);
		deq_temp.pop_back();
		deq_temp.pop_back();
	}
}

int ft_binary_search(std::deque<int> deq, int low, int hight, int value)
{
	int middle;

	if (low > hight)
	{
		if (value > deq[low])
			return (low + 1);
		else
			return (low);
	}
	middle = (low + hight) / 2;
	if (value > deq[middle])
		return (ft_binary_search(deq, middle + 1, hight, value));
	else if (value == deq[middle])
		return (middle + 1);
	return (ft_binary_search(deq, low, middle - 1, value));
}

void ft_binary_insertion(std::deque<int>& big_res, std::deque<int>& low_res)
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

void ft_add_save(std::deque<int>& big_res, int save)
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

void ft_create_big_low_deq(std::deque<int>& big_res, std::deque<int>& low_res,
			std::deque<std::deque<int> > deq_pair)
{
	for (int i = 0; i < (int)deq_pair.size(); i++)
	{
		big_res.push_back(deq_pair[i][0]);
		low_res.push_back(deq_pair[i][1]);
	}
}

void ft_mi_sort(std::deque<int>& deq)
{
	bool odd_even;
	int save;
	std::deque<std::deque<int> > deq_pair;
	std::deque<int> big_res;
	std::deque<int> low_res;

	save = -1;
	odd_even = deq.size() % 2; // true == odd / false == even
	if (odd_even == true)
	{
		save = deq.back();
		deq.pop_back();
	}
	ft_create_pair(deq, deq_pair);
	ft_sort_pair(deq_pair);
	ft_merge_sort(deq_pair, 0, deq_pair.size() - 1);
	ft_create_big_low_deq(big_res, low_res, deq_pair);
	ft_binary_insertion(big_res, low_res);
	for (int i = 0; i < (int)deq.size(); i++)
		deq[i] = big_res[i];
	if (odd_even == true)
		ft_add_save(deq, save);
}
