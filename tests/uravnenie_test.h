#ifndef URAVNENIE_TEST_H
#define URAVNENIE_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "uravnenie.h"
}

const float acc = 0.00001; // точность сравнения

TEST(uravn_test1, suite1) {
    result res = solver(4, 8, 4);
    EXPECT_EQ(res.solves_number, 1);
    EXPECT_NEAR(res.x1, -1, acc);
}
TEST(uravn_test1, suite2) {
    result res = solver(3, 0, 0);
    EXPECT_EQ(res.solves_number, 1);
    EXPECT_NEAR(res.x1, 0, acc);
}
TEST(uravn_test1, suite3) {
    result res = solver(-1, 2, -1);
    EXPECT_EQ(res.solves_number, 1);
    EXPECT_NEAR(res.x1, 1, acc);
}


TEST(uravn_test2, suite1) {
    result res = solver(0, 2, -4);
    EXPECT_EQ(res.solves_number, 1);
    EXPECT_NEAR(res.x1, 2, acc);
}
TEST(uravn_test2, suite2) {
    result res = solver(0, 0, 10);
    EXPECT_EQ(res.solves_number, 0);
}
TEST(uravn_test2, suite3) {
    result res = solver(0, 0, 0);
    EXPECT_EQ(res.solves_number, -1);
}


TEST(uravn_test3, suite1) {
    result res = solver(2, 2, -4);
    EXPECT_EQ(res.solves_number, 2);
    EXPECT_NEAR(res.x1, -2, acc);
    EXPECT_NEAR(res.x2, 1, acc);
}
TEST(uravn_test3, suite2) {
    result res = solver(-2, 2, 4);
    EXPECT_EQ(res.solves_number, 2);
    EXPECT_NEAR(res.x1, 2, acc);
    EXPECT_NEAR(res.x2, -1, acc);
}

TEST(uravn_test4, suite1) {
    result res = solver(1, 2, 4);
    EXPECT_EQ(res.solves_number, 0);
}
TEST(uravn_test4, suite2) {
    result res = solver(3, 4, 10);
    EXPECT_EQ(res.solves_number, 0);
}

#endif // URAVNENIE_TEST_H
