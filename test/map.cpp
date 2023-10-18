#include <map>
#include <iostream>

int main()
{
	std::map<int, std::string> mymap;

	mymap.insert(std::pair<int, std::string>(1, "string 1"));
	mymap.insert(std::pair<int, std::string>(2, "string 2"));
	mymap.insert(std::pair<int, std::string>(1, "string 1"));
	for(std::map<int, std::string>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		std::cout << it->first << " | " << it->second << std::endl;
	}
}
