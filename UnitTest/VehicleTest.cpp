#include "pch.h"
#include "CppUnitTest.h"
#include "../CppPlaygroundMain/Vehicle.h"
#include "../CppPlaygroundMain/Vehicle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExampleTest
{
	TEST_CLASS(VehicleTest)
	{
	public:
		
		TEST_METHOD(CheckWhetherConstructorAssignValueOrNot)
		{
			Vehicle vehicle("Car");
			Assert::AreEqual(string("Car"), vehicle.GetVehicleName());
		}
	};
}
