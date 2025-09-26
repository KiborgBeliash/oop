#include "../include/funk.h"
#include <gtest/gtest.h>


int maxMultiple(int divisor, int bound) {
    return bound - (bound % divisor);
}

TEST(MaxMultipleTest, ExactMatchCases) {
    EXPECT_EQ(maxMultiple(2, 4), 4);
    EXPECT_EQ(maxMultiple(3, 9), 9);
    EXPECT_EQ(maxMultiple(10, 50), 50);
}

TEST(MaxMultipleTest, BelowBoundCases) {
    EXPECT_EQ(maxMultiple(2, 7), 6);
    EXPECT_EQ(maxMultiple(3, 10), 9);
    EXPECT_EQ(maxMultiple(5, 22), 20);
}

TEST(MaxMultipleTest, BoundaryCases) {
    EXPECT_EQ(maxMultiple(1, 1), 1);
    EXPECT_EQ(maxMultiple(999, 999), 999);
}

TEST(MaxMultipleTest, NoSolutionCases) {
    EXPECT_EQ(maxMultiple(10, 5), 0);
    EXPECT_EQ(maxMultiple(20, 10), 0);
}

TEST(MaxMultipleTest, LargeValueCases) {
    EXPECT_EQ(maxMultiple(100, 1000), 1000);
    EXPECT_EQ(maxMultiple(333, 1000), 999);
}

TEST(MaxMultipleTest, AdditionalCoverage) {
    EXPECT_EQ(maxMultiple(1, 100), 100);
    EXPECT_EQ(maxMultiple(100, 100), 100);
    EXPECT_EQ(maxMultiple(3, 5), 3);
}