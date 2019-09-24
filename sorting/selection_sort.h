#ifndef SORTING_SELECTION_SORT_H_
#define SORTING_SELECTION_SORT_H_

#include <limits.h>
#include <cmath>
#include <vector>

template <class T>
void SelectionSort(std::vector<T> &A, bool order) {
  std::size_t length = A.size();

  switch (order) {
    case true:
      for (size_t i = 0; i < length - 1; i++) {
        int min_idx = i;
        for (size_t j = i; j < length; j++) {
          if (A[j] < A[min_idx]) {
            min_idx = j;
          }
        }
        std::swap(A[i], A[min_idx]);
      }
      break;
    case false:
      for (size_t i = 0; i < length - 1; i++) {
        int max_idx = i;
        for (size_t j = i; j < length; j++) {
          if (A[j] > A[max_idx]) {
            max_idx = j;
          }
        }
        std::swap(A[i], A[max_idx]);
      }
      break;
  }
}

#endif  // SORTING_SELECTION_SORT_H_