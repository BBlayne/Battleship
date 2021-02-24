#pragma once
#include "WorldTile.h"
#include "IShip.h"

#include <array>
#include <vector>

#define WORLD_SIZE 10

class World {
public:
	static World* Instance() {
		if (!s_instance) {
			s_instance = new World;
		}

		return s_instance;
	}

	World() {}

	HitData HandleShipFire(const Ship* sender, Coord target);

protected:
	std::vector<Ship> ships;
	std::array<std::array<Tile, WORLD_SIZE>, WORLD_SIZE> board;

private:
	static World* s_instance;
};

//World* World::s_instance = 0;