#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

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
