#ifndef __ABS_TEST_HPP__
#define __ABS_TEST_HPP__

#include "gtest/gtest.h"

#include "abs.cpp"
#include "abs.hpp"
#include "decorator.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(AbsTest, Abs1) {
  Base* val1 = new Op(-3.0);
  Base* abs1 = new Abs(val1);

  EXPECT_EQ(abs1->evaluate(), 3.0);
}

#endif //__FLOOR_TEST_HPP__
