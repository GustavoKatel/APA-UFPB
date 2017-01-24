#include "selection_sort.h"

#include "utils.h"

bool selection_sort::selection_sort(std::vector<int> &vec)
{

  int i, j, imin;

  for(i=0; i < vec.size(); i++) {

    imin = i;

    for(j=i; j < vec.size(); j++) {

      if(vec[j] < vec[imin]) {
        imin = j;
      }

    }

    if(i != imin) {
      swap(vec, i, imin);
    }

  }

  return true;

}
