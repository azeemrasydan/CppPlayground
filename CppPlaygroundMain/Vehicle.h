#pragma once
#include <string>
using namespace std;

class Vehicle {

private:
	string Name;

public:
	Vehicle(string VehicleName);

	string GetVehicleName();

};