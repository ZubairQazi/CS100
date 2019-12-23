#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"
#include "op.hpp"

TEST(DivTest, DivEvaluateNonZero) {
    Base* a1 = new Op(35);
    Base* a2 = new Op(5);
    Base* test = new Div(a1, a2);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(DivTest, DivEvaluateMeg) {
    Base* a1 = new Op(-5);
    Base* a2 = new Op(1);
    Base* test = new Div(a1, a2);
    EXPECT_EQ(test->evaluate(), -5);
}

#endif //__DIV_TEST_HPP__
