#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNORMAL) {
    Op* test = new Op(7);
    EXPECT_EQ(test->evaluate(), 7);
}

#endif //__OP_TEST_HPP__
