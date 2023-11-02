#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../Lab 6.3 it/Lab 6.3 it.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestComputeSum)
        {
            std::vector<int> input = { 1, 2, 3, 4, 5 };

            int expected = 15;

            int result = Sum(input);

            Assert::AreEqual(expected, result);
        }
    };
}
