#ifndef SORTING_MERGE_SORT_H_
#define SORTING_MERGE_SORT_H_

#include <vector>

void Merge(std::vector<int> &A, int p, int q, int r, bool order);
void MergeSortRecursor(std::vector<int> &A, int p, int r, bool order);
void MergeSort(std::vector<int> &A, bool order = true);

#endif // SORTING_MERGE_SORT_H_