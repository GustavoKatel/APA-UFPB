#include "utils.h"

int swap(std::vector<int> &vec, int i, int j)
{

  int aux = vec[i];
  vec[i] = vec[j];
  vec[j] = aux;

}
