#pragma once
#ifndef MOB_
#define MOB_
#include "entity.h"
#include "alive.h"
#include "amoveble.h"

class mob :public entity, public alive, public amoveble
{

public:
	mob(float _x, float _y, float _maxhp, float _acthp, float _dirx, float _diry, float _s);
	void takedomage(float _domage) override;
	void move() override;
};

#endif