#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4Samples/Drug.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab4SamplesTest
{
	TEST_CLASS(DrugTest)
	{
	public:
		
		TEST_METHOD(ConstructorTest)
		{
			auto drugPtr = new Drug("Euthyrox", 100, 0, 345.99);
			auto drug2Ptr = new Drug("Euthyrox", 100, 0, 345.99);
			Assert::AreEqual(100.0, drugPtr->getConcentration());
			Assert::AreEqual(345.99, drugPtr->getPrice());
			Assert::AreEqual(std::string("Euthyrox"), drugPtr->getName());
			Assert::AreEqual(drugPtr->toString(), drug2Ptr->toString());
		}

		TEST_METHOD(toStringTest)
		{
			auto drugPtr = new Drug("Euthyrox", 100, 0, 345.99);
			Assert::AreEqual(std::string("Euthyrox 100.000000 0 345.990000"), drugPtr->toString());
		}

		TEST_METHOD(operatorSubtractTest)
		{
			auto drug = Drug("Euthyrox", 100, 12, 345.99);
			drug -= 10;
			Assert::AreEqual(std::string("Euthyrox 100.000000 2 345.990000"), drug.toString());
		}

		TEST_METHOD(operatorSubtractInvalidQuantityTest)
		{
			auto drug = Drug("Euthyrox", 100, 2, 345.99);
			try {
				drug -= 10;
			}
			catch (std::exception ex) {
				Assert::AreEqual(std::string("You cannot subtract the provided quantity"), std::string(ex.what()));
			}
		}
	};
}
