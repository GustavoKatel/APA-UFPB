#include "merge_sort.h"

#include <iostream>

#include "utils.h"

std::vector<int> merge_sort::merge_sort(std::vector<int> &vec)
{

  if(vec.size() <= 1){
    return vec;
  }

  int half = vec.size() / 2;

  std::vector<int> left(vec.begin(), vec.begin() + half);
  std::vector<int> right(vec.begin() + half, vec.end());

  left = merge_sort(left);
  right = merge_sort(right);

  return merge(left, right);

}

std::vector<int> merge_sort::merge(std::vector<int> &left, std::vector<int> &right)
{
  std::vector<int> vecres;

  auto ileft = left.begin();
  auto iright = right.begin();

  while( ileft != left.end() && iright != right.end() ) {

    if( *ileft <= *iright ) {
      vecres.push_back(*ileft);
      ileft++;
    } else {
      vecres.push_back(*iright);
      iright++;
    }

  } // while

  while( ileft != left.end() ) {
    vecres.push_back(*ileft);
    ileft++;
  }

  while( iright != right.end() ) {
    vecres.push_back(*iright);
    iright++;
  }

  return vecres;

}
