#include <vector>
#include <iostream>

int main()
{
	std::vector<std::vector<int> > vect;
	std::vector<int> vect_add;

	vect_add.push_back(1);
	vect_add.push_back(-1);
	vect.push_back(vect_add);
	vect.push_back(vect_add);
	
	for (int i = 0; i < (int)vect.size(); i++)
	{
		for (int j = 0; j < (int)vect[i].size(); j++)
			std::cout << vect[i][j] << " ";
		std::cout << std::endl;
	}

	return (0);
}
