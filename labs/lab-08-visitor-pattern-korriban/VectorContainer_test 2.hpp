#ifndef __VEC_TEST_HPP__
#define __VEC_TEST_HPP__

#include "gtest/gtest.h"

#include "VectorContainer.cpp"
#include "VectorContainer.hpp"
#include "container.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(VecTest, Push) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(5);
    VectorContainer* test = new VectorContainer();
    test->add_element(val1);
    EXPECT_EQ(test->at(0), val1);
}

TEST(VecTest, Push2) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(7);
    VectorContainer* test = new VectorContainer();
    test->add_element(val1);
    test->add_element(val2);
    EXPECT_EQ(test->at(1), val2);
}

TEST(VecTest, Size) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(7);
    VectorContainer* test = new VectorContainer();
    test->add_element(val1);
    test->add_element(val2);
    EXPECT_EQ(test->size(), 2);
}

TEST(VecTest, At) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(7);
    VectorContainer* test = new VectorContainer();
    test->add_element(val1);
    test->add_element(val2);
    EXPECT_EQ(test->at(0), val1);
}

#endif //__VEC_TEST_HPP__
