#include <iostream>
#include <string>
#include "rawscores.hpp"

void rawscores(int& numscores, double* totalscores, int*ids, int& numproj, int* points, int* weight, int& numstudents, int*id, std::string* name) {
  for (int i=0; i<numscores; ++i){
    std::cin >> ids[i];
    double sum = 0;
    for (int j=0; j<numproj; ++j) {
      int a;
      std::cin >> a;
      sum = sum + ((a/(double)points[j])*(double)weight[j]);
    }
    totalscores[i] = sum;
  }
  
  std::cout << "TOTAL SCORES" << std::endl;
  for (int l=0; l<numstudents; l++) {
    int num = 0;
    for (int m=0; m<numscores; m++) {
      if (id[l] == ids[m]){
        std::cout << id[l] << " " << name[l] << " " << totalscores[m] << std::endl;
        num = 1;
      }
      else if (id[1] != ids[m] && m==numscores-1 && num==0) {
        std::cout << id[l] << " " << name[l] << " 0" << std::endl;
      }
    }
  }
}
