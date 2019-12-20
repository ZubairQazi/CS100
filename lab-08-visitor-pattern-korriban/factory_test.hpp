#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "factory.cpp"
#include "base.hpp"
#include "op.hpp"

TEST(FactoryTest, Factory1) {
    char * inp[] = {"./calculator", "2 + 2 + 2 / 3 * 2 - 1"};
    Factory *fact = new Factory();
    Base *val = fact->parse(inp, 2);

    EXPECT_EQ(val->evaluate(), 3);
}

TEST(FactoryTest, Factory2) {
    char * inp[] = {"./calculator", "4 * 4 * 4 / 4 / 4 / 4 + 2 - 3"};
    Factory *fact = new Factory();
    Base *val = fact->parse(inp, 2);

    EXPECT_EQ(val->evaluate(), 0);
}

TEST(FactoryTest, Factory3) {
    char * inp[] = {"./calculator", "4"};
    Factory *fact = new Factory();
    Base *val = fact->parse(inp, 2);

    EXPECT_EQ(val->evaluate(), 4);
}


#endif //__FACTORY_TEST_HPP__
