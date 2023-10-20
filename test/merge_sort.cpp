#include <vector>
#include <algorithm>
#include <iostream>


void ft_merge(std::vector<int>& vect, int low, int hight)
{
	std::vector<int>::iterator it_result;
	int i;
	int j;

	std::cout << "H: " << hight << " L: " << low << std::endl;
	for (std::vector<int>::iterator it = vect.begin(); it != vect.begin() + hight; it++)
		std::cout << "Vect" << (*it) << std::endl;
	std::cout << std::endl;
	i = 0;
	j = 0;
	while (low < hight -1)
	{
		if (vect.at(i) > vect.at(j))
		{
			std::cout << "Begin I:" << i << "Begin J:" << j << std::endl; 
			iter_swap(vect.begin() + i, vect.begin() + j + hight);
			i++;
		}
		if (vect.at(i) <= vect.at(j))
		{
			std::cout << "Begin2 I: " << i << " Begin J: " << j << " low: "<< low << std::endl; 
			j++;
		}
		low++;
	}
	std::cout  << "---------------------" << std::endl;
}

std::vector<int> ft_merge_sort(std::vector<int> vect, int low, int hight)
{
	if (hight > low)
	{
		ft_merge_sort(vect, low, hight / 2);
		std::cout << "Hight Loop: " << hight << "low Loop: " << low << std::endl;
		ft_merge_sort(vect, (low + hight) / 2 + 1 , hight);
		ft_merge(vect, low, hight);
	}
	return (vect);
}

int main()
{

	std::vector<int> result;
	std::vector<int> vect;
	vect.push_back(6);
	vect.push_back(10);
	vect.push_back(1);
	vect.push_back(5);
	vect.push_back(13);
	vect.push_back(60);
	vect.push_back(-1);
	vect.push_back(0);
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << (*it) << std::endl;
	result = ft_merge_sort(vect, 0, 8)	;
	std::cout << "-------" << std::endl;
	for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
		std::cout << "Merde: " << (*it) << std::endl;
	return (0);
}
