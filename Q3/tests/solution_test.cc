#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesConsecutiveNumbersEvenLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 2.5);
  inputs = {2, 3, 4, 5, 6, 7};
  EXPECT_EQ(solution.FindMedian(inputs), 4.5);
  inputs = {2, 5, 7, 9, 10, 18};
  EXPECT_EQ(solution.FindMedian(inputs), 8);
}

TEST(FindMedianTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 5};
  EXPECT_EQ(solution.FindMedian(inputs), 3);
  inputs = {2, 5, 7, 9, 13};
  EXPECT_EQ(solution.FindMedian(inputs), 7);
}

TEST(FindMedianTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
}
