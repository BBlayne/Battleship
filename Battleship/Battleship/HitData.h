#pragma once
#include "WorldCoord.h"

struct HitData {
	bool hit;
	Coord coord;

	HitData() {
		hit = false;
		coord = Coord();
	}

	HitData(Coord target) {
		hit = false;
		coord = target;
	}
};