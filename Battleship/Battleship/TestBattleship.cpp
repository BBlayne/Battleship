#include "TestBattleship.h"
#include "World.h"

World* World::s_instance = 0;

TEST_CASE("Test that GetHP returns max hp after instantiation", "[TestBattleship]") {
	TestBattleship* tBB = new TestBattleship();

	REQUIRE(tBB->GetHP() == MAX_BB_HP);
}

TEST_CASE("Test that Fire(x,y) returns hitdata at x,y", "[TestBattleship]") {
	TestBattleship* tBB = new TestBattleship();

	HitData hd = tBB->Fire(Coord(1, 1));

	REQUIRE(hd.coord == Coord(1,1));
	REQUIRE(hd.hit == false); // nothing to hit
	REQUIRE(hd.hit != true); // nothing to hit
}