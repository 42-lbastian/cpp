#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& cat);
		virtual ~Cat(void);
		Cat& operator=(const Cat& cat);
		void makeSound(void) const;
};





#endif
