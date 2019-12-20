#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, OpEvaluateNonZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNORMAL) {
    Op* test = new Op(7);
    EXPECT_EQ(test->evaluate(), 7);
}

#endif //__RAND_TEST_HPP__
