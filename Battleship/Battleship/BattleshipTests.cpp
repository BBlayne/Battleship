#include "TestBattleship.h"

TEST_CASE("Battleship Returns non-negative HP", "[HP]") {
	TestBattleship* tbs = new TestBattleship();

	int res = tbs->GetHP();

	REQUIRE(res >= 0);

	delete(tbs);
}

TEST_CASE("Battleship Returns 4 HP", "[HP]") {
	TestBattleship* tbs = new TestBattleship();

	int res = tbs->GetHP();

	REQUIRE(res == 4);
}