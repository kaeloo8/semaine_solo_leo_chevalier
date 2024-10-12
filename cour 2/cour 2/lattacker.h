#pragma once
#ifndef IATTACKER_
#define IATTACKER_
#include "alive.h"
 
class IAttacker {
public:
    virtual void attack(alive* target) = 0;
};

#endif
