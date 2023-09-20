#include "ATarget.hpp"

ATarget::ATarget(void)
{
}

ATarget::ATarget(std::string type):type(type)
{
}

ATarget::ATarget(ATarget& atarget)
{
	(*this) = atarget;
}

ATarget& ATarget::operator=(ATarget& atarget)
{
	this->type = atarget.type;
	return (*this);
}

ATarget::~ATarget(void)
{
}

const std::string& ATarget::getType(void) const
{
	return (this->type);
}

void ATarget::getHitBySpell(const ASpell& aspell) const
{
	std::cout << this->type << " has been " << aspell.getEffects() << "!" << std::endl;
}
