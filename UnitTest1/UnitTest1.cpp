#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_5/Pair.h"
#include "../lab1_5/Rational.h"
#include "../lab1_5/Pair.cpp"
#include "../lab1_5/Rational.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p;
			p.Init(5, 10);

			Assert::AreEqual(5, p.getFirst());
			Assert::AreEqual(10, p.getSecond());
		}
	};
}
