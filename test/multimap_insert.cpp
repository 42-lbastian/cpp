#include <iostream>
#include <map>

int main()
{
	std::multimap<int, std::string> multi;
	
	multi.insert(std::pair<int, std::string>(1, "Toto1"));
	multi.insert(std::pair<int, std::string>(2, "Tata2"));
	multi.insert(std::pair<int, std::string>(2, "Tata3"));
	multi.insert(multi.begin(), std::pair<int, std::string>(4, "Titi4"));
	for (std::multimap<int, std::string>::iterator it = multi.begin(); it != multi.end(); it++)
		std::cout << it->first << " | " << it->second << std::endl;
}
