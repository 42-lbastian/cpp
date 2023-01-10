#include "pointer_member.hpp"
#include <iostream>

PointMemb::PointMemb(int nb): toto(nb)
{
	std::cout << "Creation" << std::endl;
}

PointMemb::~PointMemb()
{
	std::cout << "Destruction" << std::endl;
}

void PointMemb::print_toto(void) const
{
	std::cout << "Print: " << this->toto << std::endl;
}

int main()
{
	PointMemb pm = PointMemb(13);
	int       PointMemb::*point;
	void      (PointMemb::*point_func)(void) const;
	
	point = &PointMemb::toto;
	std::cout << pm.toto << std::endl;
	pm.*point = 11;
	std::cout << pm.toto << std::endl;

	point_func = &PointMemb::print_toto;

	(pm.*point_func)();
}
