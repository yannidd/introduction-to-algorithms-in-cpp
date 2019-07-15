#include <cmath>
#include <limits.h>

#include "sorting/selection_sort.h"
#include "misc/helper.h"

void SelectionSort(int A[], int length, bool order) {
  switch (order) {
    case true:
      
      for (int i = 0; i < length - 1; i++) {
        int min_idx = i;
        for (int j = i; j < length; j++) {
          if (A[j] < A[min_idx]) {
            min_idx = j;
          }
        }
        Swap((A + i), (A + min_idx));
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
        Swap((A + i), (A + max_idx));
      }

      break;
  }
}