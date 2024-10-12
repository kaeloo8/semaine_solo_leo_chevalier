#pragma once
#include <iostream>
#include <vector>
#ifndef INTEGER_
#define INTEGER_

class integer
{
	int entier;
	std::string ostream;
public :
	integer();
	integer(int _entier);

	int getentier();
	
	
	void setentier(int _entier);

	integer operator+(const integer& _entier);
	integer operator+=(const integer& _entier);
	integer operator-(const integer& _entier);
	integer operator-=(const integer& _entier);
	integer operator*(const integer& _entier);
	integer operator*=(const integer& _entier);
	integer operator/(const integer& _entier);
	integer operator/=(const integer& _entier);
	integer operator%(const integer& _entier);
	integer operator%=(const integer& _entier);
	friend std::ostream& operator<<(std::ostream& os, const integer& _entier);
	int pow(int _exposant);

};

#endif