#ifndef HERITAGE_HPP
#define HERITAGE_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(int nb_legs);
		Animal(Animal& animal);
		~Animal(void);
		Animal& operator=(Animal &animal);
		int get_legs(void);
	
	protected:
		int _nb_legs;
};

class Monster: public Animal
{
	public:
		Monster(void);
		Monster(std::string sound);
		Monster(Monster& monster);
		~Monster(void);
		Monster& operator=(Monster &monster);
		void eat_someone(std::string someone);
	
	private:
		std::string _sound;
};


#endif
