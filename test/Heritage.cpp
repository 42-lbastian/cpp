#include "Heritage.hpp"

Animal::Animal(void):_nb_legs(0)
{
	std::cout << "Default constructor Animal" << std::endl;
}

Animal::Animal(int nb_legs):_nb_legs(nb_legs)
{
	std::cout << "Int constructor Animal" << std::endl;
}

Animal::Animal(Animal& animal)
{
	(*this) = animal;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal" << std::endl;
}

Animal& Animal::operator=(Animal &animal)
{
	if (this != &animal)
	{
		this->_nb_legs = animal._nb_legs;	
	}
	return (*this);
}

int Animal::get_legs(void)
{
	return (this->_nb_legs);
}

Monster::Monster(void):_sound("Miaou"), Animal(13)
{
	std::cout << "Default constructor Monster" << std::endl;
}

Monster::Monster(std::string sound):_sound(sound), Animal(-1)
{
	std::cout << "Int constructor Monster" << std::endl;
}

Monster::Monster(Monster& monster)
{
	(*this) = monster;
}

Monster::~Monster(void)
{
	std::cout << "Destructor Monster" << std::endl;
}

Monster& Monster::operator=(Monster &animal)
{
	if (this != &animal)
	{
	}
	return (*this);
}

void Monster::eat_someone(std::string someone)
{
	std::cout << this->_sound << " with " << _nb_legs << " "<< someone << " was eaten" << std::endl;
}

int main()
{
	Animal toto(11);
	std::cout << "Toto have " << toto.get_legs() << " legs" << std::endl;
	Monster tata("Blourg");
	tata.eat_someone("Patrick");
	return (0);
}
