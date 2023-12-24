#include "pch.h"
#include "CppUnitTest.h"
#include "../Presnukhin_Testing_VS/Presnukhin_Testing_VS.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PresnukhinTest
{
	TEST_CLASS(PresnukhinTest)
	{
	public:
		TEST_METHOD(check_UserInput_EmptyValue)
		{
			string str = "";
			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Letter_and_Int)
		{
			string str = "a2";
			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Letter)
		{
			string str = "a";
			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(CalcFloat_771723and55444)
		{
			float a = 77.723222;
			float b = 55.544111;
			float expected = 0.179111;

			float actual = CalcFloat(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}

		TEST_METHOD(CalcFloat_3123and5444)
		{
			float a = 3.123333;
			float b = 5.544444;
			float expected = 0.421111;

			float actual = CalcFloat(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		TEST_METHOD(CalcInt_77123and55444)
		{
			float a = 77.123;
			float b = 55.544;
			int expected = 21;

			int actual = CalcInt(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		TEST_METHOD(CalcInt_3123and5444)
		{
			float a = 3.123;
			float b = 5.544;
			int expected = 2;

			int actual = CalcInt(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
	};
}
