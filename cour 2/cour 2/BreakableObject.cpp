#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float _x, float _y, float _maxhp, float _acthp): entity(_x,_y), alive(_maxhp,_acthp) {
	std::cout << "Static Object just created at x = " << _x << "and y = " << _y << " width "<< _maxhp << " life "<< std::endl;
}

void BreakableObject::takedomage(float _domage) {
	alive::takedomage(_domage);

	if (getacthp() <= 0) {
		std::cout << "Breakable Object just broke" << std::endl;
	}
}