#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "main.hpp"
#include <stdint.h>

class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private:
		Serializer(void);
		Serializer(const Serializer& serializer);
		~Serializer(void);
		Serializer& operator=(const Serializer& serializer);
};

#endif
