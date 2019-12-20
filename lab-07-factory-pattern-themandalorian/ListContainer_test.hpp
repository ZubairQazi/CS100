#ifndef __LIST_CONTAINER_TEST_HPP__
#define __LIST_CONTAINER_TEST_HPP__

#include "gtest/gtest.h"

#include "ListContainer.cpp"
#include "container.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(ListTest, Push) {
    Base* val1 = new Op(7);
    Base* val2 = new Op(5);
    ListContainer* list = new ListContainer();
    list->add_element(val1);
    EXPECT_EQ(list->at(0), val1);
}

TEST(ListTest, Push2) {
  Base* val1 = new Op(7);
  Base* val2 = new Op(5);
  ListContainer* list = new ListContainer();
  list->add_element(val1);
  list->add_element(val2);
  EXPECT_EQ(list->at(1), val2);
}

TEST(ListTest, Size) {
  Base* val1 = new Op(7);
  Base* val2 = new Op(5);
  ListContainer* list = new ListContainer();
  list->add_element(val1);
  list->add_element(val2);
  EXPECT_EQ(list->size(), 2);
}

TEST(ListTest, SwapTest) {
  Base* val1 = new Op(7);
  Base* val2 = new Op(5);
  ListContainer* list = new ListContainer();
  list->add_element(val1);
  list->add_element(val2);
  list->swap(0, 1);
  EXPECT_EQ(list->at(1)->evaluate(), 7);
}

#endif //__LIST_CONTAINER_TEST_HPP__
