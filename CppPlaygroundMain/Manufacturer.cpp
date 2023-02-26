#include <string>
#include <ctime>
#include "Manufacturer.h"


Manufacturer::Manufacturer(string ManufacturerName, tm* &ManufacturerFoundedAt)
{
	Name = ManufacturerName;
	FoundedAt = ManufacturerFoundedAt;
}

Manufacturer::~Manufacturer()
{
	delete FoundedAt;
}

string Manufacturer::GetName() const
{
	return Name;
}

tm* Manufacturer::GetFoundedAt() const
{
	return FoundedAt;
}