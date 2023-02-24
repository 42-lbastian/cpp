#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#define MAX_VAL 13

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		Array<int> array_i1(5);
		Array<int> array_idef;
		Array<int> array_icpy(array_i1);
		std::cout << "Size of default array: " << array_idef.size() << std::endl;
		std::cout << "Size of arg array (5): " << array_i1.size() << std::endl;
		std::cout << "Content of array_i1: " << array_i1 << std::endl;
		array_i1[0] = 13;
		Array<int> array_icpy2(array_i1);
		array_i1[2] = 4;
		std::cout << "Content of array_i1: " << array_i1 << std::endl;
		std::cout << "Content of array_icpy: " << array_icpy << std::endl;
		std::cout << "Content of array_icpy2: " << array_icpy2 << std::endl;
		array_icpy = array_i1;
		std::cout << "Content of array_icpy: " << array_icpy << std::endl;
		try
		{
			std::cout << array_i1[-1] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index -1 Fail" << std::endl;
		}
		try
		{
			std::cout << array_i1[12] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index 12 Fail" << std::endl;
		}
		try
		{
			std::cout << array_idef[-1] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index -1 Fail" << std::endl;
		}
		try
		{
			std::cout << array_idef[12] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index 12 Fail" << std::endl;
		}
		std::cout << "-------------------------" << std::endl;


		Array<char> array_c1(5);
		Array<char> array_ccpy(array_c1);
		std::cout << "Content of array_c1: " << array_c1 << std::endl;
		array_c1[0] = 'z';
		Array<char> array_ccpy2(array_c1);
		array_c1[2] = 'Z';
		std::cout << "Content of array_c1: " << array_c1 << std::endl;
		std::cout << "Content of array_ccpy: " << array_ccpy << std::endl;
		std::cout << "Content of array_ccpy2: " << array_ccpy2 << std::endl;
		try
		{
			std::cout << array_c1[-1] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index -1 Fail" << std::endl;
		}
		try
		{
			std::cout << array_c1[12] << std::endl;
		}
		catch (std::exception&)
		{
			std::cout << "Index 12 Fail" << std::endl;
		}
		std::cout << std::endl;
	}
	else
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		std::cout << numbers << std::endl;
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
			std::cout << tmp << std::endl;
			std::cout << test << std::endl;
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	return (0);
}
