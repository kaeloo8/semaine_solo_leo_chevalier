#pragma once
#include <iostream>
#include <vector>

#ifndef VECTOR2_H
#define VECTOR2_H


class vector2
{
	float x;
	float y;
public:
	vector2();
	vector2(float _x, float _y);

	float getx();
	float gety();

	void setx(float _x);
	void setx(std::string _xstr);
	void sety(float _y);
	void sety(std::string _ystr);

	vector2 operator+(const vector2& _right);
};

#endif