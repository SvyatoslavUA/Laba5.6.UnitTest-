#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba51Test
{
	TEST_CLASS(Laba51Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double actual;
			double exp = 1.21576;
			actual = h(1, 3) + h(1, -1) - h(2, sqrt(5));
			Assert::AreEqual(actual, exp, 0.00001);
		}
	};
}
