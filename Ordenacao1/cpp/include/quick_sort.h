#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>

/*
* Quick-sort using Hoare partition scheme (https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme)
*/

bool quick_sort(std::vector<int> &vec, int lo, int hi);
int quick_sort_partition(std::vector<int> &vec, int lo, int hi);

#endif
