#include <vector>
#include <iostream>

int main(int argc, char **argv)
{
	int i;
	std::vector<int> vect;

	i = 1;
	while (argv[i])
	{
		vect.push_back(atoi(argv[i]));
		i++;
	}

	i = 2;
	for (std::vector<int>::iterator it = vect.begin() + 1; it != vect.end(); it++)
	{
		
		if (*(it - 1) > (*it))
		{
			std::cout << "Error: " << *(it - 1) << " | " << (*it) << std::endl;
		}
		i++;
	}
	return (0);
}
