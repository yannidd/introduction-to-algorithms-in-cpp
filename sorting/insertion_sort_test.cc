#include <iostream>

#include "sorting/insertion_sort.h"

int main() {
  int A[] = {5, 2, 4, 6, 1, 3};

  std::cout << "Original array: " << std::endl;
  for (int i = 0; i < sizeof(A) / sizeof(int); i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;

  InsertionSort(A, sizeof(A) / sizeof(int));
  std::cout << "Insertion sort output (ascending): " << std::endl;
  for (int i = 0; i < sizeof(A) / sizeof(int); i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;

  InsertionSort(A, sizeof(A) / sizeof(int), false);
  std::cout << "Insertion sort output (descending): " << std::endl;
  for (int i = 0; i < sizeof(A) / sizeof(int); i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}