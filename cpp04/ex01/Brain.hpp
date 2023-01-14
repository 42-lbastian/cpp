#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{
	public:
		Brain(void);
		Brain(const std::string ideas[100]);
		Brain(const Brain& brain);
		~Brain(void);
		Brain& operator=(const Brain& brain);
		void setIdea(std::string idea);
		void printIdea(void) const;

	private:
		std::string* _ideas;

};


#endif

