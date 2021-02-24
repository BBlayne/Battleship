#pragma once
#include "BattleshipGameTests.h"
#include "HitData.h"

#include <iostream>

TEST_CASE("Test hitdata instantiation", "[HitData]") {
	HitData mHit = HitData();

	REQUIRE(mHit.hit == false);
	REQUIRE(mHit.coord == Coord());
}

TEST_CASE("Test hitdata assignment", "[HitData]") {
	HitData mHit = HitData();

	REQUIRE(mHit.hit == false);

	mHit.hit = true;

	REQUIRE(mHit.hit == true);
}

TEST_CASE("Test hitdata instantiated with target", "[HitData]") {
	HitData mHit = HitData(Coord(1,1));

	REQUIRE(mHit.coord == Coord(1,1));
	REQUIRE(mHit.coord != Coord());
}