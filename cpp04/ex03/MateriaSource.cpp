#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):_nb_memory(0)
{
	std::cout << "Default Constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& materiasource)
{
	std::cout << "Copy Constructor MateriaSource" << std::endl;
	(*this) = materiasource;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructor MateriaSource" << std::endl;
	for (int i = 0; i < this->_nb_memory; i++)
		delete this->_memory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiasource)
{
	if (this != &materiasource)
	{
		for (int i = 0; i < NB_MEMORY; i++)
			this->_memory[i] = materiasource._memory[i];
		this->_nb_memory = materiasource._nb_memory;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_nb_memory >= NB_MEMORY)
		std::cout << "No memory slot available" << std::endl;
	else
	{
		std::cout << "Materia " << materia->getType() << " is stored" << std::endl;
		this->_memory[this->_nb_memory] = materia;
		this->_nb_memory++;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < NB_MEMORY; i++)
	{
		if (this->_memory[i]->getType() == type)
			return (this->_memory[i]);
	}
	std::cout << "No materia " << type << " stored" << std::endl;
	return (NULL);
}
