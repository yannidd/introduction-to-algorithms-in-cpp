#include <iostream>
#include <vector>

#include "sorting/bubble_sort.h"
#include "sorting/insertion_sort.h"
#include "sorting/selection_sort.h"
#include "sorting/merge_sort.h"

#include "gtest/gtest.h"

namespace {
	TEST(BubbleSortTest, Ascending) {
		std::vector<int> A = { 1, 2, 3, 4, 5, 6 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		BubbleSort(B, true);
		EXPECT_EQ(A, B);
	}

	TEST(BubbleSortTest, Descending) {
		std::vector<int> A = { 6, 5, 4, 3, 2, 1 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		BubbleSort(B, false);
		EXPECT_EQ(A, B);
	}

	TEST(InsertionSortTest, Ascending) {
		std::vector<int> A = { 1, 2, 3, 4, 5, 6 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		InsertionSort(B, true);
		EXPECT_EQ(A, B);
	}

	TEST(InsertionSortTest, Descending) {
		std::vector<int> A = { 6, 5, 4, 3, 2, 1 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		InsertionSort(B, false);
		EXPECT_EQ(A, B);
	}

	TEST(MergeSortTest, Ascending) {
		std::vector<int> A = { 1, 2, 3, 4, 5, 6 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		MergeSort(B, true);
		EXPECT_EQ(A, B);
	}

	TEST(MergeSortTest, Descending) {
		std::vector<int> A = { 6, 5, 4, 3, 2, 1 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		MergeSort(B, false);
		EXPECT_EQ(A, B);
	}

	TEST(SelectionSortTest, Ascending) {
		std::vector<int> A = { 1, 2, 3, 4, 5, 6 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		SelectionSort(B, true);
		EXPECT_EQ(A, B);
	}

	TEST(SelectionSortTest, Descending) {
		std::vector<int> A = { 6, 5, 4, 3, 2, 1 };
		std::vector<int> B = { 5, 2, 4, 6, 1, 3 };
		SelectionSort(B, false);
		EXPECT_EQ(A, B);
	}
}