#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName(void) const
{
	return (this->name);
}

const std::string& Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* aspell)
{
	this->spells.insert(std::pair<std::string, ASpell*>(aspell->getName(), aspell));
}

void Warlock::forgetSpell(std::string name)
{
	this->spells.erase(this->spells.find(name));
}

void Warlock::launchSpell(std::string name, ATarget& target)
{
	
	this->spells.find(name)->second->launch(target);
}
