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
			auto drug = new Drug("Euthyrox", 100, 0, 345.99);
			auto drug2 = new Drug("Euthyrox", 100, 0, 345.99);
			Assert::AreEqual(100.0, drug->getConcentration());
			Assert::AreEqual(345.99, drug->getPrice());
			Assert::AreEqual(std::string("Euthyrox"), drug->getName());
			Assert::AreEqual(drug->toString(), drug2->toString());
		}

		TEST_METHOD(toStringTest)
		{
			auto drug = new Drug("Euthyrox", 100, 0, 345.99);
			Assert::AreEqual(std::string("Euthyrox 100.000000 345.990000"), drug->toString());
		}
	};
}
