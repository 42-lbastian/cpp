#include "main.hpp"
#include "Serializer.hpp"

std::ostream& operator<<(std::ostream& o, const Data& data)
{
	o << data.name << " is " << data.age << " years old and the loto number is " << data.random;
	return (o);
}

int main()
{
	Data data;
	Data* data2;
	uintptr_t ptr;


	data.name = "Toto";
	data.age = -2;
	data.random = 42.24f;
	std::cout << data << std::endl;
	ptr = Serializer::serialize(&data);
	data2 = Serializer::deserialize(ptr);
	std::cout << (*data2) << std::endl;
	std::cout << (&data) << " " << data2 << std::endl;
	return (0);
}
