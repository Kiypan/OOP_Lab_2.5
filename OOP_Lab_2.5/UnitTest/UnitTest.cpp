#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/Money.h"
#include "../Program/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestMoney)
	{
	public:
		
		TEST_METHOD(TestSetFirst)
		{
			Money mn;
			mn.SetFirst(4);
			Assert::AreEqual(mn.GetFirst(), 4);
		}
	};
}
