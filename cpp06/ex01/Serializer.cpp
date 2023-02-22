#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Default Constructor Serializer" << std::endl;
}

Serializer::Serializer(const Serializer& serializer)
{
	(*this) = serializer;
}

Serializer::~Serializer(void)
{
	std::cout << "Destructor Serializer" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& serializer)
{
	(void)serializer;
	std::cout << "Copy Operator Serializer" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
