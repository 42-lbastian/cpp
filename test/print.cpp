#include <iostream>

int main()
{
	char buf[255];

	std::cout << "Hello" << std::endl;
	std::cin >> buf;
	std::cout << buf << std::endl;
	std::cout << "buf :" << buf << ":" << std::endl;
	return (1);
}
