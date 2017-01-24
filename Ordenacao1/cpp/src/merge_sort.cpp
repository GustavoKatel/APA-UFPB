#include "merge_sort.h"

#include <iostream>

#include "utils.h"

std::vector<double> merge_sort(std::vector<double> &vec)
{

  if(vec.size() <= 1){
    return vec;
  }

  int half = vec.size() / 2;

  std::vector<double> left(vec.begin(), vec.begin() + half);
  std::vector<double> right(vec.begin() + half, vec.end());

  left = merge_sort(left);
  right = merge_sort(right);

  return merge(left, right);

}

std::vector<double> merge(std::vector<double> &left, std::vector<double> &right)
{
  std::vector<double> vecres;

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
