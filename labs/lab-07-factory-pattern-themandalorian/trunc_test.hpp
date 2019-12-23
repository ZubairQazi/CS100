#ifndef __TRUNC_TEST_HPP__
#define __TRUNC_TEST_HPP__

#include "gtest/gtest.h"

#include "trunc.hpp"

TEST(TruncTest, TruncEvaluateZero) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(7);
    Base* val3 = new Op(4);
    Base* test = new Sub(val2, val3);
    Base* test2 = new Trunc(test);
    Base* test1 = new Add(val1, test2);
    EXPECT_EQ(test1->stringify(), "5.000000+3.000000");
}

TEST(TruncTest, TruncStringify) {
    Base* val1 = new Op(1);
    Base* val2 = new Op(3);
    Base* val3 = new Op(2);
    Base* test = new Sub(val2, val3);
    Base* test2 = new Trunc(test);
    Base* test1 = new Add(val1, test2);
    EXPECT_EQ(test1->stringify(), "1.000000+1.000000");
}

#endif //__SUB_TEST_HPP__


