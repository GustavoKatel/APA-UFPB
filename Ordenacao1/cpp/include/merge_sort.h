#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

/*
* Merge-sort using lists top-down
*/

std::vector<double>  merge_sort(std::vector<double> &vec);
std::vector<double>  merge(std::vector<double> &left, std::vector<double> &right);

#endif
