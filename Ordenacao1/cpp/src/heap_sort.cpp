#include "heap_sort.h"

#include <iostream>
#include <cmath>

#include "utils.h"

bool heap::heap_sort(std::vector<int> &vec)
{
  heapify(vec);

  int end = vec.size()-1;

  while( end > 0 ) {
    swap(vec, end, 0);
    end--;
    sift_down(vec, 0, end);
  }

  return true;

}

void heap::heapify(std::vector<int> &vec)
{
 int start = iparent(vec.size()-1);

 while(start >= 0) {

    sift_down(vec, start, vec.size()-1);
    start--;

 }

}

void heap::sift_down(std::vector<int> &vec, int start, int end)
{
  int root = start;
  int child, iswap;

  while( ileft_child(root) <= end ) {

    child = ileft_child(root);
    iswap = root;

    if( vec[iswap] < vec[child] ) {
      iswap = child;
    }

    if( child+1 <= end && vec[iswap] < vec[child+1] ) {
      iswap = child + 1;
    }

    if(iswap == root) {
      return;
    } else {
      swap(vec, root, iswap);
      root = iswap;
    }

  }

}

inline int heap::iparent(int i)
{
    return std::floor( (i-1) / 2 );
}

inline int heap::ileft_child(int i)
{
  return 2*i + 1;
}

inline int heap::iright_child(int i)
{
  return 2*i + 2;
}
