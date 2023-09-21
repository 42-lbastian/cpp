#include "ASpell.hpp"

ASpell::ASpell(void)
{
}

ASpell::ASpell(ASpell& aspell)
{
	if (this != (&aspell))
	{
		(*this) = aspell;
	}
}

ASpell::ASpell(std::string name, std::string effects):name(name), effects(effects)
{
}

ASpell::~ASpell(void)
{
}

const std::string& ASpell::getName(void) const
{
	return (this->name);
}

const std::string& ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::launch(const ATarget& atarget) const
{
	atarget.getHitBySpell((*this));
}

ASpell& ASpell::operator=(ASpell& aspell)
{
	this->name = aspell.name;
	this->effects = aspell.effects;
	return (*this);
}
