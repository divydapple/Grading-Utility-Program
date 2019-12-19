#include <iostream>
#include <string>
#include "graded_artifacts.hpp"

void graded_artifacts(int& numproj, int* points, int* weight) {
  for (int i=0; i<numproj; ++i) {
    std::cin >> points[i];
  }
  
  for (int i=0; i<numproj; i++) {
    std::cin >> weight[i];
  }
}
