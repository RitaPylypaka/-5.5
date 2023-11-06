#include "pch.h"
#include "CppUnitTest.h"
#include "../пр5.5/пр5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, a(1));
			Assert::AreEqual(22, a(2));
		}
	};
}

