#ifndef SORTING_SELECTION_SORT_H_
#define SORTING_SELECTION_SORT_H_

#include <vector>
#include <vector>
#include <cmath>
#include <limits.h>

#include "misc/helper.h"


template<class T>
void SelectionSort(std::vector<T> &A, bool order) {
  std::size_t length = A.size();

  switch (order) {
    case true:
      
      for (int i = 0; i < length - 1; i++) {
        int min_idx = i;
        for (int j = i; j < length; j++) {
          if (A[j] < A[min_idx]) {
            min_idx = j;
          }
        }
        std::swap(A[i], A[min_idx]);
      }

      break;
    case false:

      for (int i = 0; i < length - 1; i++) {
        int max_idx = i;
        for (int j = i; j < length; j++) {
          if (A[j] > A[max_idx]) {
            max_idx = j;
          }
        }
        std::swap(A[i], A[max_idx]);
      }

      break;
  }
}

#endif // SORTING_SELECTION_SORT_H_