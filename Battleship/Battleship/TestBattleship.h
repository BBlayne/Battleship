#pragma once
#include "ITestShip.h"
#include "Battleship.h"

class TestBattleship : public Battleship, public TestShip {
public:
	int GetHP() { return Battleship::GetHP(); }
	void Fire() { Battleship::Fire(); }
	void Run();
};