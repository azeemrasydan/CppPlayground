#include "Vehicle.h"
#include <string>
using namespace std;

Vehicle::Vehicle(string VehicleName) {
	Name = VehicleName;
}

string Vehicle::GetVehicleName() {
	return Name;
}