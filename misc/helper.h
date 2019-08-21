#ifndef MISC_HELPER_H_
#define MISC_HELPER_H_

#include <vector>

void PrintArray(int A[], int length);
void Swap(int *a, int *b);

template<typename T>
void PrintArray(std::vector<T> A) {
  for (int i = 0; i < A.size(); i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

#endif // MISC_HELPER_H_