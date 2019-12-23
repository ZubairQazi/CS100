#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Base* a1 = new Op(7);
    Base* a2 = new Op(5);
    Base* test = new Mult(a1, a2);
    EXPECT_EQ(test->evaluate(), 35);
}

TEST(MultTest, MultEvaluateZeroo) {
    Base* a1 = new Op(0);
    Base* a2 = new Op(5);
    Base* test = new Mult(a1, a2);
    EXPECT_EQ(test->evaluate(), 0);
}

#endif //__MULT_TEST_HPP__
