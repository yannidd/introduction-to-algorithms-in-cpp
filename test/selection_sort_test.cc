#include <iostream>
#include <vector>

#include "sorting/selection_sort.h"
#include "misc/helper.h"

#include "gtest/gtest.h"

namespace {
	TEST(SortingTest, Ascending) {
		std::vector<int> A = {1, 2, 3, 4, 5, 6};
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		SelectionSort(B, true);
		EXPECT_EQ(A, B);
	}
}