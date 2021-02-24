#pragma once
#include "ITestShip.h"
#include "Battleship.h"

class TestBattleship : public Battleship {
public:
	int GetHP() override { return Battleship::GetHP(); }
	HitData Fire(Coord target) override { return Battleship::Fire(target); }

protected:
	// if there were private/protected attributes/methods, 
	// test them using publicly accessible test methods
};