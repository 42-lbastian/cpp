#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>

class ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(ASpell& aspell);
		ASpell(std::string name, std::string effects);
		ASpell& operator=(ASpell& aspell);
		virtual ~ASpell(void);
		const std::string& getName(void) const;
		const std::string& getEffects(void) const;
		virtual ASpell* clone(void) = 0;
		void launch(const ATarget& atarget) const;
		

	protected:
		std::string name;
		std::string effects;
};

#include "ATarget.hpp"
#endif
