#include <iostream>

#include "sorting/selection_sort.h"
#include "misc/helper.h"

int main() {
  int A[] = {5, 2, 4, 6, 1, 3};

  std::cout << "Original array: " << std::endl;
  PrintArray(A, sizeof(A) / sizeof(int));

  SelectionSort(A, sizeof(A) / sizeof(int));
  std::cout << "Insertion sort output (ascending): " << std::endl;
  PrintArray(A, sizeof(A) / sizeof(int));

  SelectionSort(A, sizeof(A) / sizeof(int), false);
  std::cout << "Insertion sort output (descending): " << std::endl;
  PrintArray(A, sizeof(A) / sizeof(int));

  return 0;
}