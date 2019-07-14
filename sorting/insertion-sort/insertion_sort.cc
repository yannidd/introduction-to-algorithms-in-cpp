#include "sorting/insertion-sort/insertion_sort.h"

void InsertionSort(int A[], int length, bool order) {
  switch (order) {
    case true:
      for (int j = 1; j < length; j++) {
        int key = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > key) {
          A[i + 1] = A[i];
          i--;
        }
        A[i + 1] = key;
      }
      break;
    case false:
      for (int j = length - 2; j >= 0; j--) {
        int key = A[j];
        int i = j + 1;
        while (i <= length - 1 && A[i] > key) {
          A[i - 1] = A[i];
          i++;
        }
        A[i - 1] = key;
      }
      break;
  }
}