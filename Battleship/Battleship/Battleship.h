#pragma once
#include "GLOBAL_SHIP_DEFINES.h"
#include "IShip.h"

class Battleship : public Ship {
public:
	int GetHP() override;
	HitData Fire(Coord target) override;

	Battleship();

protected:
	int _hp;
};