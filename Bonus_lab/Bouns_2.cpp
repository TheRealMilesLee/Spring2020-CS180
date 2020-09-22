//Hengyi Li
//This program is to sort the student records
//This Program has been done by Hengyi Li on 10:00 PM, April 26, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace  std;

/**
 * This function is to sort the vector
 * @param student_scores is the vector that need to sort
 * @param student_names is the vector that in string to sort
 */
void selection_sort(vector<unsigned> &student_scores, vector<string>
  &student_names);

int main()
{
  ifstream infile;
  infile.open("student.txt");
  vector<string> student_names;
  vector<unsigned> student_scores;
  string names;
  unsigned scores;
  while (infile >> names)
  {
    infile >> scores;
    student_scores.push_back(scores);
    student_names.push_back(names);
  }

  selection_sort(student_scores, student_names);
  for(unsigned looptimes = 0; looptimes < student_scores.size();
      looptimes++)
  {
    cout << student_names.at(looptimes)
         << student_scores.at(looptimes) << endl;
  }
  return 0;
}

void selection_sort(vector<unsigned> &student_scores, vector<string>
  &student_names)
{
  size_t size = student_scores.size();
  for(size_t select_indx = 0; select_indx < size - 1; select_indx++)
  {
    int smallest_value = student_scores.at(select_indx);
    size_t smallest_indx = select_indx;
    for (size_t compare_indx = select_indx +1; compare_indx < size; compare_indx++)
    {
      if(student_scores.at(compare_indx) < smallest_value)
      {
        smallest_value = student_scores.at(compare_indx);
        smallest_indx = compare_indx;
      }
    }
    swap(student_scores.at(smallest_indx), student_scores.at(select_indx));
    swap(student_names.at(smallest_indx),student_names.at(select_indx));

  }
}