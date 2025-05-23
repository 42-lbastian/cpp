#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
		void makeSound(void) const;
		std::string getType(void) const;

	protected:
		std::string _type;
	
};





#endif
