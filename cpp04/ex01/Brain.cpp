#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas = new std::string[100];
	std::cout << "Default Constructor Brain" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Copy Constructor Brain" << std::endl;
	(*this) = brain;
}

Brain::Brain(const std::string ideas[100])
{
	std::cout << "Copy String Constructor Brain" << std::endl;
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain" << std::endl;
	delete [] this->_ideas;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Copy Operator Brain" << std::endl;
	if (this != (&brain))
		(*this) = Brain(brain._ideas);
	return (*this);
}

void Brain::setIdea(std::string idea)
{
	this->_ideas[0] = idea;
}

void Brain::printIdea(void) const
{
	std::cout << this->_ideas[0] << std::endl;
}
