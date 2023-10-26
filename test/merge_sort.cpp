#include <vector>
#include <algorithm>
#include <iostream>


void ft_merge(std::vector<int>& vect, int low, int hight, int middle)
{
	std::vector<int> vect_temp;
	int i;
	int j;

	i = low;
	j = middle + 1;
	while (i <= middle && j <= hight)
	{
		if (vect[i] < vect[j])
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
		vect[i] = vect_temp[(i - low)];
}

void ft_merge_sort(std::vector<int>& vect, int low, int hight)
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

int main()
{

	std::vector<int> vect;
	vect.push_back(6);
	vect.push_back(10);
	vect.push_back(1);
	vect.push_back(5);
	vect.push_back(13);
	vect.push_back(60);
	vect.push_back(-1);
	vect.push_back(0);
	vect.push_back(11);
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << (*it) << std::endl;
	ft_merge_sort(vect, 0, vect.size())	;
	std::cout << "-------" << std::endl;
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << "Sort: " << (*it) << std::endl;
	return (0);
}
