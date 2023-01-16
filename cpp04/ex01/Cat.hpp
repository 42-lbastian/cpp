#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& cat);
		~Cat(void);
		Cat& operator=(const Cat& cat);
		Animal& operator=(const Animal& animal);
		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};





#endif
