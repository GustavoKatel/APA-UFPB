#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>

/*
* Quick-sort using Hoare partition scheme (https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme)
*/
namespace heap_sort {

  bool heap_sort(std::vector<int> &vec);
  void heapify(std::vector<int> &vec);
  void sift_down(std::vector<int> &vec, int start, int end);

  inline int iparent(int i);
  inline int ileft_child(int i);
  inline int iright_child(int i);

};

#endif
