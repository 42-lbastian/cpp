#include "RPN.hpp"

bool ft_is_operator(char c)
{
	if (c == '/' || c == '+' || c == '-' || c == '*')
		return (true);
	return (false);
}

bool ft_check_char(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || 
				ft_is_operator(str[i])))
			return (false);
		i++;
	}
	return (true);
}

void ft_calculate(const char oper, std::stack<int>& mystack)
{
	int val1;
	int val2;

	val1 = mystack.top();
	mystack.pop();
	val2 = mystack.top();
	mystack.pop();

	if (oper == '+')
		mystack.push(val2 + val1);
	if (oper == '-')
		mystack.push(val2 - val1);
	if (oper == '*')
		mystack.push(val2 * val1);
	if (oper == '/')
		mystack.push(val2 / val1);
}

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
				if (isdigit(argv[1][i]) == true)
					mystack.push((argv[1][i] - '0'));
				if (ft_is_operator(argv[1][i]))
					ft_calculate(argv[1][i], mystack);
				i++;
			}
			std::cout << mystack.top();
		}
		else
			std::cout << "Invalid char in input" << std::endl;
	}
	else
		std::cout << "Argument Error" << std::endl;
	return (0);
	
}
