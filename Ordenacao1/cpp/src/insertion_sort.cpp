#include "insertion_sort.h"

#include "utils.h"

bool insertion_sort::insertion_sort(std::vector<int> &vec)
{

  int i, j;
  int x;

  for(i=0; i < vec.size(); i++) {

    x = vec[i];
    j = i - 1;

    while(j >= 0 && vec[j] > x ) {
      vec[j+1] = vec[j];
      j--;
    }

    vec[j+1] = x;

  }

  return true;

}
