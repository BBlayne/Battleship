#include "Battleship.h"
#include "World.h"

int Battleship::GetHP()
{
	return this->_hp;
}

HitData Battleship::Fire(Coord target)
{
	return World::Instance()->HandleShipFire(this, target);
}

Battleship::Battleship()
{
	_hp = MAX_BB_HP; // battleships can take 4 hits
}
