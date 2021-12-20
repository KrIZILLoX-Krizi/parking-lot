#include <bits/stdc++.h>

using namespace std;

// class for coordinates
class Coord {
	private:
	int x, y, z;

	public:
	// gets coordinate data
	void getCoordData(void) {
		cout << "x: "; cin >> this->x;
		cout << "y: "; cin >> this->y;
		cout << "z: "; cin >> this->z;
	}

	// x, y and z show functions
	const int getXData(void) { return this->x; }
	const int getYData(void) { return this->y; }
	const int getZData(void) { return this->z; }

	// shows coordinate data
	const void showCoordData(void) {
		cout << "x: " << this->x << 
			" y: " << this->y <<
			" z: " << this->z << endl;
	}
};