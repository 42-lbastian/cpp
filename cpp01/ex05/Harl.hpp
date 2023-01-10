#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#define NB_CMD 4

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level) const;

	private:
		void _debug(void) const;
		void _info(void) const;
		void _warning(void) const;
		void _error(void) const;
};

#endif
