#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>

class ASpell;

class ATarget
{
	public:
		ATarget(void);
		ATarget(std::string type);
		ATarget(ATarget& atarget);
		ATarget& operator=(ATarget& atarget);
		virtual ~ATarget(void);
		const std::string& getType(void) const;
		virtual ATarget* clone(void) = 0;
		void getHitBySpell(const ASpell& aspell) const;
		
	protected:
		std::string type;

};

#include "ASpell.hpp"
#endif
