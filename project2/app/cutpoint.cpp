#include <iostream>
#include <string>
#include "cutpoint.hpp"

void cutpoint(int& numcutpoints, int& numstudents, int* id, int* ids, double* totalscores, std::string* gradeop, std::string* name, int& numscores) {
  for (int i=0; i<numcutpoints; ++i) {
    double arr[4];
    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    std::cout << "CUTPOINT SET " << i+1 << std::endl;
    for (int j=0; j<numstudents; j++) {
      int num = 0;
      for (int m=0; m<numscores; m++) {
        if (id[j] == ids[m]){
          double grade = totalscores[m];
          std::string letter;
          if (grade < arr[3]) {
            letter= "F";
          }
          else if (grade < arr[2]) {
            letter= "D";
          }
          else if (grade < arr[1]) {
            letter= "C";
          }
          else if (grade < arr[0]) {
            letter= "B";
          }
          else {
            letter= "A";
          }

          if (gradeop[j] == "P") {
            if (letter == "A" || letter == "B" || letter == "C") {
              letter = "P";
            }
            else {
              letter = "NP";
            }
          }
          
          std::cout << id[j] << " " <<  name[j] << " " << letter << std::endl;
          num = 1;
        }
        else if (id[j] != ids[m] && m==numscores-1 && num==0) {
          std::cout << id[j] << " " << name[j] << " " << "F" << std::endl;
        }
      }
    }
  }
}
