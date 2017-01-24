#include "utils.h"

int swap(std::vector<double> &vec, int i, int j)
{

  double aux = vec[i];
  vec[i] = vec[j];
  vec[j] = aux;

}
