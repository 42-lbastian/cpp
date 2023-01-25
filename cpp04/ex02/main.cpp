#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NB_ANIMAL 10

int main(void)
{
	AAnimal* animal[NB_ANIMAL];

	for (int i = 0; i < NB_ANIMAL; i++)
	{
		if (i < (NB_ANIMAL / 2))
			animal[i] = new Cat();
		if (i >= (NB_ANIMAL / 2))
			animal[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 0; i < NB_ANIMAL; i++)
	{
		std::cout << "AAnimal nb " << i << " ";
		animal[i]->makeSound();
	}

	std::cout << std::endl;
	animal[NB_ANIMAL - 1]->getBrain()->setIdea("I'm a cat");
	animal[NB_ANIMAL - 1]->getBrain()->printIdea();
	(*animal[5]) = (*animal[NB_ANIMAL - 1]);
	animal[5]->getBrain()->printIdea();
	animal[NB_ANIMAL - 1]->getBrain()->setIdea("I'm a flying cat");
	animal[NB_ANIMAL - 1]->getBrain()->printIdea();
	animal[5]->getBrain()->printIdea();
	
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	std::cout << std::endl;
	Cat basic2;
	{
		Cat tmp2 = basic2;
	}

	std::cout << std::endl;
	for (int i = 0; i < NB_ANIMAL; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}

	return (0);
}
