#include <iostream>

int main(void)
{
	int* a = new int[10]();

	for(int i = 0; i < 10; i++)
		std::cout << a[i] << " | " << i << std::endl;
	return (0);
}
