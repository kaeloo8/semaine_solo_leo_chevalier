#include "amoveble.h"

amoveble::amoveble() : direction(0.f, 0.f), speed(0.f) {

}
amoveble::amoveble(float _x, float _y, float _s) : direction(_x,_y),speed(_s) {

}
void amoveble::setdir(float _x, float _y) {
	direction = vector2(_x, _y);
}


void amoveble::setspeed(float _s) {
	speed = _s;
}


void amoveble::move() {

}