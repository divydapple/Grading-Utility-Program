#include <iostream>
#include <string>
#include "cutpoint.hpp"
#include "graded_artifacts.hpp"
#include "students.hpp"
#include "rawscores.hpp"

int main()
{
  int numproj;
  std::cin >> numproj;
  int* points = new int[numproj];
  int* weight = new int[numproj];
  graded_artifacts(numproj,points,weight);
  
  int numstudents;
  std::cin >> numstudents;
  int* id = new int[numstudents];
  std::string* gradeop = new std::string[numstudents];
  std::string* name = new std::string[numstudents];
  students(numstudents, id, gradeop, name);

  int numscores;
  std::cin >> numscores;
  double* totalscores = new double[numscores];
  int* ids = new int[numstudents];
  rawscores(numscores, totalscores, ids, numproj, points, weight, numstudents, id, name);
  
  int numcutpoints;
  std::cin >> numcutpoints;
  cutpoint(numcutpoints, numstudents, id, ids, totalscores, gradeop, name, numscores);
  
  delete[] points;
  delete[] weight;
  delete[] id;
  delete[] gradeop;
  delete[] name;
  delete[] totalscores;
  delete[] ids;
  
  
    

    return 0;
}

