#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>

bool ft_is_operator(char c);
bool ft_check_char(char *str);
int ft_error_empty(void);
int ft_calculate(const char oper, std::stack<int>& mystack);

#endif
