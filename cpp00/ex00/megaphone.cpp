#include <iostream>

void ft_str_upper(char *str)
{
	int j;
	char c;

	j = 0;
	while(str[j])
	{
		c = toupper(str[j]);
		std::cout << c;
		j++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			ft_str_upper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
}
