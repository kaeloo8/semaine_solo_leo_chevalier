#include "mob.h"
#include <iostream>

mob::mob(float _x, float _y, float _maxhp, float _acthp, float _dirx, float _diry, float _s) : entity(_x,_y), alive(_maxhp,_acthp), amoveble(_dirx,_diry,_s) {
	std::cout << "Mob just created at x =" << _x << " and y = " <<_y<< " with " << _maxhp << " life with direction x = " << _dirx << " and y = " << _diry << std::endl;
}
void mob::takedomage(float _domage) {
	alive::takedomage(_domage);
	if (getacthp() <= 0) {
		std::cout << "Mob just die" << std::endl;
	}
}
void mob::move() {
	std::cout<< getpos().getx();
		
}