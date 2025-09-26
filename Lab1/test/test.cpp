#include "../include/funk.h"
#include <gtest/gtest.h>


int maxMultiple(int divisor, int bound) {
    return bound - (bound % divisor);
}

// Группировка тестов по типам сценариев
TEST(MaxMultipleTest, ExactMatchCases) {
    // Когда bound точно кратно divisor
    EXPECT_EQ(maxMultiple(2, 4), 4);
    EXPECT_EQ(maxMultiple(3, 9), 9);
    EXPECT_EQ(maxMultiple(5, 25), 25);
    EXPECT_EQ(maxMultiple(10, 50), 50);
}

TEST(MaxMultipleTest, BelowBoundCases) {
    // Когда нужно найти число меньше bound
    EXPECT_EQ(maxMultiple(2, 7), 6);
    EXPECT_EQ(maxMultiple(3, 10), 9);
    EXPECT_EQ(maxMultiple(4, 15), 12);
    EXPECT_EQ(maxMultiple(5, 22), 20);
}

TEST(MaxMultipleTest, BoundaryCases) {
    // Пограничные значения
    EXPECT_EQ(maxMultiple(1, 1), 1);
    EXPECT_EQ(maxMultiple(1000, 1000), 1000);
    EXPECT_EQ(maxMultiple(999, 999), 999);
}

TEST(MaxMultipleTest, NoSolutionCases) {
    // Когда divisor > bound (нет решения кроме 0)
    EXPECT_EQ(maxMultiple(10, 5), 0);
    EXPECT_EQ(maxMultiple(20, 10), 0);
    EXPECT_EQ(maxMultiple(100, 50), 0);
}

TEST(MaxMultipleTest, LargeValueCases) {
    // Работа с большими числами
    EXPECT_EQ(maxMultiple(100, 1000), 1000);
    EXPECT_EQ(maxMultiple(333, 1000), 999);
    EXPECT_EQ(maxMultiple(250, 1000), 1000);
}

// Дополнительные тесты для полного покрытия
TEST(MaxMultipleTest, AdditionalCoverage) {
    EXPECT_EQ(maxMultiple(1, 100), 100);  // divisor = 1
    EXPECT_EQ(maxMultiple(100, 100), 100); // равные значения
    EXPECT_EQ(maxMultiple(7, 8), 7);      // bound = divisor + 1
    EXPECT_EQ(maxMultiple(3, 5), 3);      // маленькие числа
}