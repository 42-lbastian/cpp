#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> ft_merge(std::vector<int> vect, std::vector<int> vect2)
{
	std::vector<int> temp_vect;
	std::vector<int> temp_vect2;
	std::vector<int> result;
	unsigned long k;
	unsigned long i;
	unsigned long j;

	i = 0;
	j = 0;
	k = 0;
	if (vect.size() > 1 || vect2.size() > 1)
	{
		temp_vect.insert(temp_vect.begin(), vect.begin(), vect.begin() + ((vect.size() / 2)));
		temp_vect2.insert(temp_vect2.begin(), vect.begin() + ((vect.size() / 2)), vect.end());
		result = ft_merge(temp_vect, temp_vect2);
		for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
			std::cout << "Merde2: " << (*it) << std::endl;
	}
	while (k < vect.size() + vect2.size())
	{
		if ((i < vect.size() && j < vect2.size() &&  vect.at(i) > vect2.at(j)))
		{
			result.insert(result.begin() + k , vect2.at(j));
			j++;
		}
		if ((i < vect.size() && j < vect2.size() && vect.at(i) <= vect2.at(j)))
		{
			result.insert(result.begin() + k, vect.at(i));
			i++;
		}
		k++;
	}
	return (result);
}

int main()
{
	std::vector<int> result;
	std::vector<int> vect = {6, 10, 1, 5, 13, 60, -1, 0};
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << (*it) << std::endl;
	result = ft_merge(vect, vect);
	std::cout << "-------" << std::endl;
	for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
		std::cout << "Merde: " << (*it) << std::endl;
	return (0);
}
