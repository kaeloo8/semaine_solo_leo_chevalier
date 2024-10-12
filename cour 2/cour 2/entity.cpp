#include "entity.h"

entity::entity(): position(0.f,0.f) {

}

entity::entity(float _x, float _y) : position(_x, _y) {

}

vector2 entity::getpos() {
	return position;
}

void entity::setpos(float _x, float _y) {
	position = vector2(_x, _y);
}