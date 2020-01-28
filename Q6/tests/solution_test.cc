#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialNegative, ReturnRes) {
  Solution solution;
  EXPECT_EQ(solution.FactorialNonRecur(-1), -1);
  EXPECT_EQ(solution.FactorialNonRecur(-10), -1);

  EXPECT_EQ(solution.FactorialRecur(-1), -1);
  EXPECT_EQ(solution.FactorialRecur(-10), -1);
}

TEST(FactorialZero, ReturnRes) {
  Solution solution;
  EXPECT_EQ(solution.FactorialNonRecur(0), 1);

  EXPECT_EQ(solution.FactorialRecur(0), 1);
}

TEST(FactorialPositive, ReturnRes) {
  Solution solution;
  EXPECT_EQ(solution.FactorialNonRecur(1), 1);
  EXPECT_EQ(solution.FactorialNonRecur(2), 2);
  EXPECT_EQ(solution.FactorialNonRecur(3), 6);
  EXPECT_EQ(solution.FactorialNonRecur(4), 24);
  EXPECT_EQ(solution.FactorialNonRecur(5), 120);

  EXPECT_EQ(solution.FactorialRecur(1), 1);
  EXPECT_EQ(solution.FactorialRecur(2), 2);
  EXPECT_EQ(solution.FactorialRecur(3), 6);
  EXPECT_EQ(solution.FactorialRecur(4), 24);
  EXPECT_EQ(solution.FactorialRecur(5), 120);
}