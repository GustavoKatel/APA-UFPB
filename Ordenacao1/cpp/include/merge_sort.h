#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

/*
* Merge-sort using lists top-down
*/

std::vector<int>  merge_sort(std::vector<int> &vec);
std::vector<int>  merge(std::vector<int> &left, std::vector<int> &right);

#endif
