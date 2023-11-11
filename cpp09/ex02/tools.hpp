#ifndef TOOLS_HPP
#define TOOLS_HPP
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <deque>
#include <vector>
#include "vector.hpp"

int ft_atoi(const std::string str, int& nb);
int ft_strlen(char *str);
int ft_get_up_deq(int size);
int ft_get_up_vect(int size, int real_size);

#endif
