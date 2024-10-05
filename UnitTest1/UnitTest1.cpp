#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.2/LR5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 10;
			double eps = 0.001;
			double s = 0;
			int n = 0;
			double a = -1/x;

			S(x, eps, n, s);

			
			
			
			Assert::AreEqual(a, s, 0.001);
		}
	};
}
