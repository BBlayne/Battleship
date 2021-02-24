#include "BattleshipGameTests.h"
#include "WorldTile.h"

TEST_CASE("Test tile instantiation", "[WorldTile]") {
	HitData mHit = HitData();

	REQUIRE(mHit.hit == false);
	REQUIRE(mHit.coord == Coord());
}