#include<bits/stdc++.h>
#include "Coord.cpp"

using namespace std;

// class for vehicle
class Vehicle {
	private:
	vector<Coord> corners;
	int length, width, height;

	public:
	// get vehicle data
	void getVehicleData(void) {
		// for each corner
		for(int i = 0; i < 4; ++i) {
			Coord coord;

			switch(i) {
				case 0 : cout << "front-right" << endl;
				break;
				case 1 : cout << "front-left" << endl;
				break;
				case 2 : cout << "rear-right" << endl;
				break;
				case 3 : cout << "rear-left" << endl;
				break;
			}

			// class coordinate getter
			coord.getCoordData();

			// push each coord into
			// vehicle dimensions vector
			corners.push_back(coord);
		}

		// compute lenght, width and height
		this->compute();
	}

	// compute dimensions
	void compute(void) {
		this->length = max(corners[0].getXData() - corners[2].getXData(),
			corners[1].getXData() - corners[3].getXData());
		this->width = max(corners[0].getYData() - corners[1].getYData(),
			corners[2].getYData() - corners[3].getYData());
		this->height = max(
			{corners[0].getZData(), corners[1].getZData(),
				corners[2].getZData(), corners[3].getZData()
			}
		);
	}

	// length, width and height show functions
	const int getLengthData(void) { return this->length; }
	const int getWidthData(void) { return this->width; }
	const int getHeightData(void) { return this->height; }

	// show vehicle data
	const void showVehicleData(void) {

		// for each dimension
		for(int i = 0; i < 4; ++i) {
			switch(i) {
				case 0 : cout << "front-right" << endl;
				break;
				case 1 : cout << "front-left" << endl;
				break;
				case 2 : cout << "rear-right" << endl;
				break;
				case 3 : cout << "rear-left" << endl;
				break;
			}

			// printing each dimension
			this->corners[i].showCoordData();
		}
	}
};