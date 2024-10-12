#include "vector2.h"
#include <iostream>
#include <string>

vector2::vector2() : x(0.f),y(0.f){

}
vector2::vector2(float _x, float _y) : x(_x), y(_y) {

}

float vector2::getx() {
	return this->x;
}

float vector2::gety() {
	return this->y;
}

void vector2::setx(float _x) {
	this->x = _x;
}

void vector2::sety(float _y) {
	this->y = _y;
}

void vector2::setx(std::string _xstr) {
	this->x = std::stof(_xstr);
}

void vector2::sety(std::string _ystr) {
	this->y = std::stof(_ystr);
}

vector2 vector2::operator+(const vector2& _right) {
	float tx = x + _right.x;
	float ty = y + _right.y;

	return vector2(tx, ty);
}