#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#define NB_FORM 3

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& intern);
		~Intern(void);
		Intern& operator=(const Intern& intern);
		AForm* makeform(std::string form, std::string target);	

};

#endif
