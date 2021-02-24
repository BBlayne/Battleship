#pragma once
#include "WorldCoord.h"
#include "IShip.h"

struct Tile {
	Coord coord;
	Ship* ship;

	Tile() {
		coord = Coord();
		ship = nullptr;
	}

	Tile(Coord coord) {
		this->coord = coord;
		ship = nullptr;
	}
};