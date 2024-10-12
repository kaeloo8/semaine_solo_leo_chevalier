#include "StaticObject.h"
#include <iostream>


StaticObject::StaticObject(float _x, float _y):entity(_x,_y) {
	std::cout << "Static Object just created at x = " << _x << "and y = " << _y << std::endl;
}