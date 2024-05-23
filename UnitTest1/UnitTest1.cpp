#include "pch.h"
#include "CppUnitTest.h"

#include "../LAB_13_1/dod.h"
#include "../LAB_13_1/sum.h"
#include "../LAB_13_1/var.h"

#include "../LAB_13_1/sum.cpp"
#include "../LAB_13_1/var.cpp"
#include "../LAB_13_1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMain)
		{
			x = 0;
			e = 0.0001;

			sum();

			double expected = cos(x);
			Assert::AreEqual(expected, s, 0.0001, L"Calculated sum is incorrect");
		}
	};
}