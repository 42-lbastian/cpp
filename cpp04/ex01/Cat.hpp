#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	public:
		Cat(void);
		Cat(const Cat& cat);
		virtual ~Cat(void);
		Cat& operator=(const Cat& cat);
		AAnimal& operator=(const AAnimal& animal);
		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};





#endif
