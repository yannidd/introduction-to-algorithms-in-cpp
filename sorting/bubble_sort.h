#ifndef SORTING_BUBBLE_SORT_H_
#define SORTING_BUBBLE_SORT_H_

#include <iostream>
#include <vector>

template <class T>
void BubbleSort(std::vector<T> &A, bool order) {
  size_t length = A.size();

  switch (order) {
    case true:
      for (size_t i = 0; i < length - 1; i++) {
        for (size_t j = 0; j < (length - i - 1); j++) {
          if (A[j] > A[j + 1]) {
            std::swap(A[j], A[j + 1]);
          }
        }
      }
      break;
    case false:
      for (size_t i = 0; i < length - 1; i++) {
        for (size_t j = 0; j < (length - i - 1); j++) {
          if (A[j] < A[j + 1]) {
            std::swap(A[j], A[j + 1]);
          }
        }
      }
      break;
  }
}

#endif  // SORTING_BUBBLE_SORT_H_