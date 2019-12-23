#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__

#include "gtest/gtest.h"

#include "iterator.hpp"

TEST(IteratorTest, BinIt) {
    Base *b = new Add(new Op(5), new Op(6));

    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 5);
    it->next();
    EXPECT_EQ(it->current()->evaluate(), 6);
}

TEST(IteratorTest, NullIt) {
    Base *b = new Op(8);

    EXPECT_EQ(b->create_iterator()->current(), nullptr);
}

TEST(IteratorTest, UnaryIt) {
    Base *b = new Floor(new Op(4.2));

    Iterator *it = b->create_iterator();

    EXPECT_EQ(it->current()->evaluate(), 4);
}

#endif //__ITERATOR_TEST_HPP__
