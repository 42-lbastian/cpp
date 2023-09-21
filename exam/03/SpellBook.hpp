#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <map>
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & name);
		ASpell* createSpell(std::string const & name);
	
	private:
		SpellBook(SpellBook& spellbook);
		SpellBook& operator=(SpellBook& spellbook);
		std::map<std::string, ASpell*>book;
};

#endif
