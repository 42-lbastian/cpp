#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		const std::string& getName(void) const;
		const std::string& getTitle(void) const;
		void setTitle(const std::string& title);
		void introduce (void) const;

	private:
		Warlock(void);
		Warlock(Warlock& warlock);
		Warlock& operator=(const Warlock& warlock);
		std::string name;
		std::string title;

};

#endif
