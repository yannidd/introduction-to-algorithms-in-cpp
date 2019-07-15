#include <vector>
#include <cmath>
#include <limits.h>

#include "sorting/merge_sort.h"

void Merge(std::vector<int> &A, int p, int q, int r, bool order) {
  // Compute lengths of 'left' and 'right' array.
  int n1 = q - p + 1;
  int n2 = r - q;
  // + 1 because each array will have an extra sentinel.
  std::vector<int> L(n1 + 1);
  std::vector<int> R(n2 + 1);
  // L[0, n1 - 1] = A[p, q].
  // R[0, n2 - 1] = A[q + 1, r].
  for (int i = 0; i < n1; i++) {
    L[i] = A[p + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[q + i + 1];
  }
  switch (order) {
    case true:
      // Add sentinels.
      L[n1] = INT_MAX;
      R[n2] = INT_MAX;
      // Merge.
      for (int k = p, i = 0, j = 0; k <= r; k++) {
        if (L[i] <= R[j]) {
          A[k] = L[i++];
        }
        else {
          A[k] = R[j++];
        }
      }
      break;
    case false:
      // Add sentinels.
      L[n1] = INT_MIN;
      R[n2] = INT_MIN;
      // Merge.
      for (int k = p, i = 0, j = 0; k <= r; k++) {
        if (L[i] >= R[j]) {
          A[k] = L[i++];
        }
        else {
          A[k] = R[j++];
        }
      }
      break;
  }
}

void MergeSortRecursor(std::vector<int> &A, int p, int r, bool order) {
  if (p < r) {
    int q = (int) std::floor((p + r) / 2);
    MergeSortRecursor(A, p, q, order);
    MergeSortRecursor(A, q + 1, r, order);
    Merge(A, p, q, r, order);
  }
}

void MergeSort(std::vector<int> &A, bool order) {
  MergeSortRecursor(A, 0, A.size() - 1, order);
}