#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvaluateZero) {
    Base* val1 = new Op(-5);
    Base* val2 = new Op(5);
    Add* test = new Add(val1, val2);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluateNonNegative) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(5);
    Add* test = new Add(val1, val2);
    EXPECT_EQ(test->evaluate(), 10);
}

#endif //__ADD_TEST_HPP__
