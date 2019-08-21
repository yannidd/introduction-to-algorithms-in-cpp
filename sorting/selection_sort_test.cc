#include <iostream>
#include <vector>

#include "sorting/selection_sort.h"
#include "misc/helper.h"

int main() {
  std::vector<int> A = {5, 2, 4, 6, 1, 3};

  std::cout << "Original array: " << std::endl;
  PrintArray(A);

  SelectionSort(A, true);
  std::cout << "Insertion sort output (ascending): " << std::endl;
  PrintArray(A);

  SelectionSort(A, false);
  std::cout << "Insertion sort output (descending): " << std::endl;
  PrintArray(A);

  return 0;
}