#ifndef __CEIL_TEST_HPP__
#define __CEIL_TEST_HPP__

#include "gtest/gtest.h"

#include "ceil.cpp"
#include "ceil.hpp"
#include "decorator.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(CeilTest, Ceil1) {
  Base* val1 = new Op(3.3);
  Base* ceil1 = new Ceil(val1);

  EXPECT_EQ(ceil1->evaluate(), 4);
}

#endif //__CEIL_TEST_HPP__
