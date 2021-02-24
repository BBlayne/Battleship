#pragma once
#include "HitData.h"
class Ship {
public:
	virtual int GetHP() = 0;
	virtual HitData Fire(Coord target) = 0;
};