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

int ft_error_empty(void)
{
	std::cout << "Error Calculation" << std::endl;
	return (1);
}

int ft_calculate(const char oper, std::stack<int>& mystack)
{
	int val1;
	int val2;

	if (mystack.empty() == true)
		return (ft_error_empty());
	val1 = mystack.top();
	mystack.pop();
	if (mystack.empty() == true)
		return (ft_error_empty());
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
	return (0);
}
