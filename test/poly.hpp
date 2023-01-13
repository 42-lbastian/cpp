#ifndef POLY_HPP
#define POLY_HPP

class Animal
{
	public:
		Animal(void);
		Animal(int legs);
		Animal(Animal& animal);
		~Animal(void);
		Animal& operator=(Animal& animal);
		void print_legs(void);
		virtual void sound(void);
	
	protected:
		int _nb_legs;
};

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(int legs);
		Cat(Cat& cat);
		~Cat(void);
		Cat& operator=(Cat& cat);
		virtual void sound(void);
};

#endif
