#pragma once
#ifndef ENTITY_
#define ENTITY_
#include "vector2.h"
class entity
{
	vector2 position;

public :
	entity() ;
	entity(float _x, float _y);
	
	virtual vector2 getpos();
	virtual void setpos(float _x,float _y);
};
#endif