#include "World.h"

HitData World::HandleShipFire(const Ship* sender, Coord target)
{
	HitData hit = HitData(target);
	hit.hit = false;	

	return hit;
}
