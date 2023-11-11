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
	while (argv[i])
	{
		if (vect[i - 1] > vect[i])
		{
			std::cout << "Error: " << vect[i - 1] << " | " << vect[i] << std::endl;
		}
		i++;
	}
	return (0);
}
