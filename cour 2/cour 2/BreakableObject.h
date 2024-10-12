#pragma once
#ifndef BREACKABLEOBJ_
#define BREACKABLEOBJ_
#include "entity.h" 
#include "alive.h"
class BreakableObject : public entity, public alive 
{

public:
	BreakableObject(float _x,float _y,float _maxhp, float acthp);
	void takedomage(float _domage) override;

};

#endif