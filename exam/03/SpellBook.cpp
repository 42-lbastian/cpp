#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

SpellBook::~SpellBook(void)
{
}

void SpellBook::learnSpell(ASpell* spell)
{
	this->book.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void SpellBook::forgetSpell(std::string const & name)
{
	std::map<std::string, ASpell*>::iterator it = this->book.find("name");
	if (it != this->book.end())
	{
		delete it->second;
		this->book.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const & name)
{
	ASpell *spells[3] ={new Fwoosh, new Fireball, new Polymorph};
	for (int i = 0; i = 3; i++)
	{
		if (spells[i]->getName() == name)
		{
			for (int y = 0; y = 3; y++)
			{
				if (y != i)
					delete spells[y];
			}
			return (spells[i]);
		}
	}
	return (NULL);
}
