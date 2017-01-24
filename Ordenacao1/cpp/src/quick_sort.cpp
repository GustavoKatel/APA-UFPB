#include "quick_sort.h"

#include <iostream>

#include "utils.h"

bool quick_sort(std::vector<int> &vec, int lo, int hi)
{
  if(lo < hi) {
    int p = quick_sort_partition(vec, lo, hi);
    quick_sort(vec, lo, p-1);
    quick_sort(vec, p+1, hi);

    return true;
  }

  return false;

}

int quick_sort_partition(std::vector<int> &vec, int lo, int hi)
{
  int pivot = vec[hi];
  int i = lo;

  for(int j=lo; j <= hi-1; j++) {
    if(vec[j] <= pivot) {
      swap(vec, i, j);
      i++;
    }
  } // for

  swap(vec, i, hi);

  return i;

}
