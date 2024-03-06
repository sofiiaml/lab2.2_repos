#include "pch.h"
#include "CppUnitTest.h"
#include "../2.2/String.h"
#include "../2.2/String.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			String s1 = "aaa";
			String s2 = "aaaa";
			bool result = s1 == s2;
			Assert::AreEqual(false, result);
		}
	};
}
