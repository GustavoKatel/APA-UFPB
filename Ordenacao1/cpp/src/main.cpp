#include <iostream>
#include <vector>

#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"

#define READ_ALL while( std::cin >> aux ) { vec.push_back(aux); }

int main(int argc, const char *argv[]) {

  if(argc < 2) {
    std::cout << "Usage: bin/ord1 <ALGO> < input.file > output.file" << '\n';
    return 1;
  }

  std::vector<int> vec;
  int aux;

  switch(argv[1][0]) {
    case '1':
      READ_ALL;
      selection_sort(vec);
      break;

    case '2':
      READ_ALL;
      insertion_sort(vec);
      break;

    case '3':
      READ_ALL;
      vec = merge_sort(vec);
      break;

    case '4':
      READ_ALL;
      quick_sort(vec, 0, vec.size()-1);
      break;

    case '5':
      READ_ALL;
      heap::heap_sort(vec);
      break;

    default:
      std::cout << "Invalid algorithm" << '\n';
      break;
  }

  for(aux: vec) {
    std::cout << aux << ' ';
  }
  std::cout << std::endl;

  return 0;
}
