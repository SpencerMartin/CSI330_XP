// unittest_MathPlayground.cpp : Defines the entry point for the console application.
//
#include "gtest/gtest.h"
#include "../MathPlayground/header.h"

TEST(testForward, twice)
{


	EXPECT_EQ("Brian Hall Brian Hall \n", printForward(2));
}

TEST(testBackward, 02)
{
	EXPECT_EQ("llaH nairB llaH nairB \n", printBackward(-2));
}

TEST(testNoisy, three)
{
	EXPECT_EQ("Brian Hall Brian Hall Brian Hall \a\n", printNoisy(3));
}

TEST(testPi, normal)
{
	EXPECT_EQ("Brian Hall Brian Hall Brian Hall B \n", printPi());
}



int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	int result = RUN_ALL_TESTS();
	system("PAUSE");
	return result;
}