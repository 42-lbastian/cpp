#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base* generate(void)
{
	int nb;
	Base* base;

	srand(time(NULL));
	nb = rand() % 3;
	if (nb == 0)
		base = new A();
	if (nb == 1)
		base = new B();
	if (nb == 2)
		base = new C();
	return (base);
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "It's the class A" << std::endl;
	else
	{
		B* b = dynamic_cast<B*>(p);
		if (b)
			std::cout << "It's the class B" << std::endl;
		else
		{
			C* c = dynamic_cast<C*>(p);
			if (c)
				std::cout << "It's the class C" << std::endl;
			else
				std::cout << "Class unknown" << std::endl;
		}
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "It's the class A" << std::endl;
		(void)a;
	}
	catch (const std::exception&)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "It's the class B" << std::endl;
			(void)b;
		}
		catch (const std::exception&)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "It's the class C" << std::endl;
				(void)c;
			}
			catch (const std::exception&)
			{	
				std::cout << "Class unknown" << std::endl;
			}
		}
	}
}

int main(void)
{
	Base* base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
}
