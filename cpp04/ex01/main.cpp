#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* cat = new Cat();

	cat->setIdea("I'm a dog");
	cat->printIdea();
	Animal* cat_cpy = new Animal(*cat);

	delete cat;
	return (0);
}
