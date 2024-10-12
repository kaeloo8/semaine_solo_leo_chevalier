#include "integer.h"
#include <vector>
#include <iostream>
#include <math.h>

integer::integer() : entier(0) {

}

integer::integer(int _entier) : entier(_entier) {

}

int integer::getentier() {
	return this->entier;
}

void integer::setentier(int _entier) {
	this->entier = _entier;
}

integer integer::operator+(const integer& _entier) {
	int solution = this->entier + _entier.entier;
	return solution;
}

integer integer::operator+=(const integer& _entier) {
	this->entier = this->entier += _entier.entier;
	return this->entier;
}

integer integer::operator-(const integer& _entier) {
	int solution = this->entier - _entier.entier;
	return solution;
}

integer integer::operator-=(const integer& _entier) {
	this->entier = this->entier -= _entier.entier;
	return this->entier;
}

integer integer::operator*(const integer& _entier) {
	int solution = this->entier * _entier.entier;
	return solution;
}

integer integer::operator*=(const integer& _entier) {
	this->entier = this->entier *= _entier.entier;
	return this->entier;
}

integer integer::operator/(const integer& _entier) {
	int solution = this->entier / _entier.entier;
	return solution;
}

integer integer::operator/=(const integer& _entier) {
	this->entier = this->entier /= _entier.entier;
	return this->entier;
}

integer integer::operator%(const integer& _entier) {
	int solution = this->entier % _entier.entier;
	return solution;
}

integer integer::operator%=(const integer& _entier) {
	this->entier = this->entier %= _entier.entier;
	return this->entier;
}

std::ostream& operator<<(std::ostream& os, const integer& _entier) {
	os << _entier.entier;
	return os;
}

int integer::pow(int _exposant) {
	return std::pow(this->entier,_exposant);
}