#pragma once
#include "IShip.h"

class Battleship : public Ship {
public:
	int GetHP();
	void Fire();

	Battleship();

protected:
	int _hp;
};