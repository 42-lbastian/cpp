#include <vector>
#include <algorithm>
#include <iostream>

void ft_print_vect(std::vector<int> vect)
{
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void ft_classic_insertion(std::vector<int> vect)
{
	int k;

	for (int i = 1; i < (int)vect.size(); i++)
	{
		k = i;
		while (k != 0 && vect[k] < vect[k - 1])
		{
			std::swap(vect[k], vect[k - 1]);
			k--;
		}
	}
	std::cout << "Classic: ";
	ft_print_vect(vect);
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

void ft_binary_insertion(std::vector<int> vect)
{
	int index;

	for (int i = 1; i < (int)vect.size(); i++)
	{
		index = ft_binary_search(vect, 0, i - 1, vect[i]);
		vect.insert(vect.begin() + index, vect[i]);
		vect.erase(vect.begin() + i + 1);
	}
	std::cout << "Binary: ";
	ft_print_vect(vect);
}

int main()
{
	std::vector<int> vect;

	vect.push_back(1);
	vect.push_back(12);
	vect.push_back(0);
	vect.push_back(23);
	vect.push_back(4);
	vect.push_back(5);
	ft_print_vect(vect);
	ft_classic_insertion(vect);
	ft_binary_insertion(vect);
	return (0);
}
