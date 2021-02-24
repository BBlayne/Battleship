#pragma once
struct Coord {
	int x;
	int y;

	Coord() {
		x = 0;
		y = 0;
	}

	Coord(int _x, int _y) {
		x = _x;
		y = _y;
	}


};

inline bool operator==(const Coord& lhs, const Coord& rhs) { 
	return (lhs.x == rhs.x && lhs.y == rhs.y);
};

inline bool operator!=(const Coord& lhs, const Coord& rhs) {
	return !operator==(lhs, rhs);
};

// for future reference
//inline bool operator==(const X& lhs, const X& rhs){ /* do actual comparison */ }
//inline bool operator!=(const X& lhs, const X& rhs) { return !operator==(lhs, rhs); }
//inline bool operator< (const X& lhs, const X& rhs) { /* do actual comparison */ }
//inline bool operator> (const X& lhs, const X& rhs) { return  operator< (rhs, lhs); }
//inline bool operator<=(const X& lhs, const X& rhs) { return !operator> (lhs, rhs); }
//inline bool operator>=(const X& lhs, const X& rhs) { return !operator< (lhs, rhs); }