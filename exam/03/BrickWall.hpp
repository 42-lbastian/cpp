#ifndef BRICKWALL_HPP
#define DRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		BrickWall(void);
		~BrickWall(void);
		virtual ATarget* clone(void);
};

#endif
