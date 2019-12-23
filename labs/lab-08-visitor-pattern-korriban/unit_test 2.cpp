#include "gtest/gtest.h"

#include "ListContainer_test.hpp"
#include "VectorContainer_test.hpp"
#include "selectionsort_test.hpp"
#include "BubbleSort_test.hpp"
#include "ceil_test.hpp"
#include "floor_test.hpp"
#include "abs_test.hpp"
#include "trunc_test.hpp"
#include "paren_test.hpp"
#include "pow_test.hpp"
#include "add_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"
#include "sub_test.hpp"
// #include "factory_test.hpp"
#include "visitor_test.hpp"
#include "iterator_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
