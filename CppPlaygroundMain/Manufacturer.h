#pragma once
#include <string>
#include <ctime>


using namespace std;

class Manufacturer {
private:
	string Name;
	tm* FoundedAt;

public:
	Manufacturer(string Name, tm* &ManufacturerFoundedAt);
	~Manufacturer();

	string GetName() const;

	tm* GetFoundedAt() const;


};
