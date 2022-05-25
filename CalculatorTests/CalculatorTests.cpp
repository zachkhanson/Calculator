#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Processor.h"
#include "../Calculator/Processor.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	auto& p = Processor::Get();

	double answer;
	TEST_CLASS(CalculatorTests)
	{
	public:
		
		TEST_METHOD(Add1Plus1) {
			answer = 1+1;
			Assert::AreEqual(answer, p.Add(1, 1));
		}

		TEST_METHOD(Multiply2Times2) {
			answer = 2*2;
			Assert::AreEqual(answer, p.Multiply(2, 2));
		}

		TEST_METHOD(Divide4by2) {
			answer = 4/2;
			Assert::AreEqual(answer, p.Divide(4, 2));
		}
		
		TEST_METHOD(Multiply4Times2) {
			answer = 4*2;
			Assert::AreEqual(answer, p.Multiply(4, 2));
		}
		TEST_METHOD(Add3Plus7) {
			answer = 3+7;
			Assert::AreEqual(answer, p.Add(3, 7));
		}
		TEST_METHOD(Subtract7Minus3) {
			answer = 7-3;
			Assert::AreEqual(answer, p.Subtract(7, 3));
		}

		TEST_METHOD(Multiply6Times6) {
			answer = 6*6;
			Assert::AreEqual(answer, p.Multiply(6, 6));
		}

		TEST_METHOD(Divide2by2) {
			answer = 2 / 2;
			Assert::AreEqual(answer, p.Divide(2, 2));
		}

		TEST_METHOD(Add10Plus2) {
			answer = 10+2;
			Assert::AreEqual(answer, p.Add(10, 2));
		}

		TEST_METHOD(Multiply4Times10) {
			answer = 4 *10;
			Assert::AreEqual(answer, p.Multiply(4, 10));
		}

		TEST_METHOD(Mod10Mod5) {
			answer = 10%5;
			Assert::AreEqual(answer, p.Mod(10, 5));
		}
		TEST_METHOD(Mod45Mod5) {
			answer = 45 % 5;
			Assert::AreEqual(answer, p.Mod(45, 5));
		}
		TEST_METHOD(Mod20Mod5) {
			answer = 20 % 5;
			Assert::AreEqual(answer, p.Mod(20, 5));
		}
	};
}
