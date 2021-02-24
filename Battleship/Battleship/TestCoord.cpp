#include "BattleshipGameTests.h"
#include "WorldCoord.h"

TEST_CASE("Test instantiation", "[Coord]") {
	Coord mCoord(0, 0);

	REQUIRE(mCoord.x == 0);
	REQUIRE(mCoord.y == 0);

	Coord mCoordB(1, 1);

	REQUIRE(mCoordB.x == 1);
	REQUIRE(mCoordB.y == 1);
}

TEST_CASE("Test assignment", "[Coord]") {
	Coord mCoord(0, 0);

	mCoord.x = 1;
	mCoord.y = 1;

	// check that it does not equal old values
	REQUIRE(mCoord.x != 0);
	REQUIRE(mCoord.y != 0);

	// check that it equals new values
	REQUIRE(mCoord.x == 1);
	REQUIRE(mCoord.y == 1);
}

TEST_CASE("Test comparison a==b", "[Coord]") {
	Coord mCoordA(0, 0);
	Coord mCoordB(0, 0);

	REQUIRE(mCoordA == mCoordB);
}

TEST_CASE("Test comparison a!=b", "[Coord]") {
	Coord mCoordA(0, 0);
	Coord mCoordB(1, 0);

	REQUIRE(mCoordA != mCoordB);
}