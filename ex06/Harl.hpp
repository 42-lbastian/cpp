#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#define NB_CMD 4

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
		void filter(std::string level);

	private:
		void execute_cmd(std::string level, void (Harl::*point_func)(void)const);
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
};

#endif
