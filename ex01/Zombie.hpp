#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void set_name(std::string name);
		void announce() const;  
	private:
		std::string _name;
};


#endif
