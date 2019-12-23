#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include "gtest/gtest.h"

#include "floor.hpp"
#include "decorator.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(FloorTest, Floor1) {
  Base* val1 = new Op(4.9);
  Base* floor1 = new Floor(val1);

  EXPECT_EQ(floor1->evaluate(), 4);
}

#endif //__FLOOR_TEST_HPP__
