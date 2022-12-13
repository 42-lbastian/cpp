#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		std::string cpp_get_name();
		void        announce();  
	private:
		std::string _name;
};


#endif
