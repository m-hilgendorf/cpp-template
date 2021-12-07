#include <gtest/gtest.h>
#include "lib.hpp"

TEST(return_zero, works) {
  EXPECT_EQ(return_zero(), 0);
}
