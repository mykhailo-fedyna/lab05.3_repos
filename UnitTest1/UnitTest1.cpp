#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m, res;
			m = h(2.0);
			res = (sin(2.0) + 1) / (1 + cos(2.0));
			Assert::AreEqual(m, res, 0.000001);
		}
		TEST_METHOD(TestMethod2)
		{
			double expected_value = 1.01043;
			double actual_value = h(0.5);
			Assert::AreEqual(expected_value, actual_value, 0.1);  // Допуск можна зменшити
		}
	};
}
