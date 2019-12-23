#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvaluateZero) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(5);
    Sub* test = new Sub(val1, val2);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubEvaluateNonNegative) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(-5);
    Sub* test = new Sub(val1, val2);
    EXPECT_EQ(test->evaluate(), 10);
}

#endif //__SUB_TEST_HPP__


