#include <iostream>
#include <vector>

#include "misc/helper.h"

void PrintArray(int A[], int length) {
  for (int i = 0; i < length; i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

void PrintArray(std::vector<int> A) {
  for (size_t i = 0; i < A.size(); i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

void Swap(int *a, int *b) {
  int x = *a;
  *a = *b;
  *b = x;
}