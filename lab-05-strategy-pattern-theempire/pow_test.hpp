#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Base* a1 = new Op(2);
    Base* a2 = new Op(3);
    Base* test = new Pow(a1, a2);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateZeroo) {
    Base* a1 = new Op(2);
    Base* a2 = new Op(0);
    Base* test = new Pow(a1, a2);
    EXPECT_EQ(test->evaluate(), 1);
}

#endif //__POOW_TEST_HPP__
