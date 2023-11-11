#include "RPN.hpp"

int main(int argc, char  **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		
		std::stack<int> mystack;
		if (ft_check_char(argv[1]) == true)
		{
			while (argv[1][i])
			{
				if (isdigit(argv[1][i]))
					mystack.push((argv[1][i] - '0'));
				if (ft_is_operator(argv[1][i]))
					if (ft_calculate(argv[1][i], mystack))
						return (1);
				i++;
			}
			if (mystack.size() == 1)
				std::cout << mystack.top();
			else
				std::cout << "Invalid input" << std::endl;
		}
		else
			std::cout << "Invalid char in input" << std::endl;
	}
	else
		std::cout << "Argument Error" << std::endl;
	return (0);
	
}
