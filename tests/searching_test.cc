#include <iostream>
#include <vector>

#include "searching/binary_search.h"

#include "gtest/gtest.h"

namespace {
TEST(BinarySearchTest, KeyExists) {
  std::vector<int> A = {1, 2, 3, 4};
  for (int i = 0; i < (int) A.size(); i++) {
    int index = BinarySearch(A, i + 1);
    EXPECT_EQ(index, i);
  }
}

TEST(BinarySearchTest, KeyBelow) {
  std::vector<int> A = {1, 2, 3, 4};
  int index = BinarySearch(A, 0);
  EXPECT_EQ(index, -1);
}

TEST(BinarySearchTest, KeyAbove) {
  std::vector<int> A = {1, 2, 3, 4};
  int index = BinarySearch(A, 5);
  EXPECT_EQ(index, -1);
}
}  // namespace