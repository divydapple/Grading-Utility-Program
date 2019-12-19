#include <iostream>
#include <string>
#include "students.hpp"

void students(int& numstudents, int* id, std::string* gradeop, std::string* name) {
  for (int i=0; i<numstudents; ++i) {
    std::cin >> id[i];
    std::cin >> gradeop[i];
    std::getline(std::cin, name[i]);
  }
}
