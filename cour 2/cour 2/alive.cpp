#include "alive.h"


alive::alive(): maxhp(10),acthp(10) {

}
alive::alive(float _maxhp, float _acthp): maxhp(_maxhp),acthp(_acthp) {

}

float alive::getmaxhp() {
	return maxhp;
}
float alive::getacthp() {
	return acthp;
}
void alive::takedomage(float _domage) {
	acthp -= _domage;
}