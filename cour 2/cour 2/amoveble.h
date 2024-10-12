#pragma once
#ifndef AMOVEBLE_
#define AMOVEBLE_
#include "vector2.h"
class amoveble
{
	vector2 direction;
	float speed;
public:
	amoveble();
	amoveble(float _x, float _y, float _s);

	virtual void setdir(float _x, float _y);
	virtual void setspeed(float _s);
	virtual void move() = 0;
};
#endif
