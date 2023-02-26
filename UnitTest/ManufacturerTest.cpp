#include "pch.h"
#include <ctime>
#include "CppUnitTest.h"
#include "../CppPlaygroundMain/Manufacturer.h"
#include "../CppPlaygroundMain/Manufacturer.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MainTest
{
	TEST_CLASS(ManufacturerTest)
	{
	public:

		TEST_METHOD(CheckWhetherConstructorAssignValueOrNot)
		{
			tm* foundedAt = new tm();
			foundedAt->tm_year = 1945;
			foundedAt->tm_mon = 3;
			foundedAt->tm_mday = 12;

			Manufacturer* audi = new Manufacturer("Audi", foundedAt);

			Assert::AreEqual(string("Audi"), audi->GetName());
			Assert::AreEqual(foundedAt->tm_year, audi->GetFoundedAt()->tm_year);
		}
	};
}
