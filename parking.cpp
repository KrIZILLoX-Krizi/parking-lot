/*
V1
1 5 7
5 1 2
3 7 6
8 5 8

V2 
10 22 5
12 24 5
26 25 5
10 22 5

V3
1 5 5
5 1 8
3 7 6
8 5 12

V4
10 22 3
12 24 5
26 25 8
10 22 2

V5 
1 5 18
5 1 4
3 7 6
8 5 16

V6
10 22 5
12 24 15
26 25 6
10 22 12

sorting priority
h >> l >> w
*/

#include <bits/stdc++.h>
#include "Vehicle.cpp"

using namespace std;

// comparator for vehicle sort
bool comp(Vehicle& vehicle1, Vehicle& vehicle2) {
	// if height larger
	if(vehicle1.getHeightData() > vehicle2.getHeightData()) {
		return false;
	}
	// if height equal
	else if(vehicle1.getHeightData() == vehicle2.getHeightData()) {
		// check width
		// if width larger
		if(vehicle1.getWidthData() > vehicle2.getWidthData()) {
			return false;
		}
		// if width equal
		else if(vehicle1.getWidthData() == vehicle2.getWidthData()) {
			// check length
			// if larger
			if(vehicle1.getLengthData() > vehicle2.getLengthData()) {
				return false;
			}
			// if length small or equal
			// do nothing
			return true;
		}
		// if width smaller or equal
		// do nothing
		return true;
	}
	// if height smaller or equal
	// do nothing
	return true;
}

// driver
int main(void)
{
	int n;

	cout << "Enter the number of vehicles: ";
	cin >> n;

	// vector to store all vehicles
	vector<Vehicle> vehicles;

	// get data for n vehicles
	for(int i = 0; i < n; ++i) {
		Vehicle vehicle;
		cout << i+1 << "-th vehicle" << endl;

		// calling getter
		vehicle.getVehicleData();

		// pushing the vehicle data into
		// vehicles vector
		vehicles.push_back(vehicle);
	}

	// sort vehicles
	sort(vehicles.begin(), vehicles.end(), comp);

	// print each vehicle from vector
	for(int i = 0; i < vehicles.size(); ++i) {
		cout << i+1 << " vehicle: " << endl;

		vehicles[i].showVehicleData();
	}

	return 0;
}

// 2 2 10 1 2 10 2 0 10 1 0 10
// 4 1 10 3 1 10 4 0 10 3 0 10