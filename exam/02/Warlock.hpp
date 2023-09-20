#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		const std::string& getName(void) const;
		const std::string& getTitle(void) const;
		void setTitle(const std::string& title);
		void introduce (void) const;
		void learnSpell(ASpell* aspell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget& target);

	private:
		Warlock(void);
		Warlock(Warlock& warlock);
		Warlock& operator=(const Warlock& warlock);
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;
};

#endif
