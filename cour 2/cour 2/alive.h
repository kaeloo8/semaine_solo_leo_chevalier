#pragma once
#ifndef ALIVE_
#define ALIVE_
class alive
{
	float maxhp;
	float acthp;

public: 
	alive();
	alive(float _maxhp, float _acthp);

	virtual float getmaxhp();
	virtual float getacthp();
	virtual void takedomage(float _domage);
};

#endif