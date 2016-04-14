// unittest_MathPlayground.cpp : Defines the entry point for the console application.
//
#include "gtest/gtest.h"
#include "header.h"

TEST(testChange, myChangeTest)
{
	EXPECT_EQ(0, ChangeCalculator());
}

TEST(testFactorial, zeroInput)
{
	EXPECT_EQ(0, RunFactorial(0));
}

TEST(testFactorial, positiveInput)
{
	EXPECT_LT(0, RunFactorial(1));
	EXPECT_LT(0, RunFactorial(2));
	EXPECT_LT(0, RunFactorial(6));
}



int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	int result = RUN_ALL_TESTS();
	system("PAUSE");
	return result;
}