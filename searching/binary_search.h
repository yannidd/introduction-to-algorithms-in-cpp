#ifndef SEARCHING_BINARY_SEARCH_H_
#define SEARCHING_BINARY_SEARCH_H_

#include <vector>
#include <cmath>


template <class T>
int BinarySearchRecursor(std::vector<T>& A, T key, int start, int end) {
  int middle = (int) std::floor((start + end) / 2);

  if (start > end) {
    return -1;
  }
  
  if (A[middle] == key) {
    return middle;
  }
  else if (A[middle] < key) {
    return BinarySearchRecursor(A, key, middle + 1, end);
  }
  else {
    return BinarySearchRecursor(A, key, start, middle - 1);
  }
}

template <class T>
int BinarySearch(std::vector<T>& A, T key) {
  size_t length = (int) A.size();
  return BinarySearchRecursor(A, key, 0, length - 1);
}

#endif // SEARCHING_BINARY_SEARCH_H_