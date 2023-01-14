#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* an_cpy = new Animal(*meta);
	const Animal* dog_cpy = new Animal(*dog);
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();
	
	std::cout << std::endl << "------Normal------" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound(); //will output the cat sound!
	meta->makeSound();

	std::cout << an_cpy->getType() << " " << std::endl;
	std::cout << dog_cpy->getType() << " " << std::endl;
	an_cpy->makeSound();
	dog_cpy->makeSound();

	std::cout << std::endl << "------Wrong------" << std::endl;
	std::cout << w_meta->getType() << " " << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;
	w_meta->makeSound();
	w_cat->makeSound();

	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete an_cpy;
	delete dog_cpy;
	delete w_meta;
	delete w_cat;
	return (0);
}
