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
 * @param vector_values is the vector that need to sort
 * @param vector_string is the vector that in string to sort
 */
void selection_sort(vector<unsigned> &vector_values, vector<int> &sort);

int main()
{
  ifstream infile;
  infile.open("../student.txt");
  vector<string> student_names;
  vector<unsigned> student_scores;
  vector<int> sort;
  vector<int>location;
  string names;
  unsigned scores;
  while (infile >> names)
  {
    infile >> scores;
    student_scores.push_back(scores);
    student_names.push_back(names);
  }
  unsigned count = 0;
  for (unsigned looptimes = 0; looptimes < student_scores.size(); looptimes++)
  {
    for (unsigned loop = 0; loop < student_scores.size(); loop++)
    {
      if (student_scores.at(looptimes) > student_scores.at(loop))
      {
        count++;
      }
    }
    location.push_back(count);
    count = 0;
  }

  selection_sort(student_scores, sort);
  for(unsigned looptimes = 0; looptimes < student_scores.size();
      looptimes++)
  {
    cout << student_names.at(location.at(looptimes))
         << student_scores.at(looptimes) << endl;
  }
  return 0;
}

void selection_sort(vector<unsigned> &vector_values, vector<int> &sort)
{
  size_t size = vector_values.size();
  for(size_t select_indx = 0; select_indx < size - 1; select_indx++)
  {
    int smallest_value = vector_values.at(select_indx);
    size_t smallest_indx = select_indx;
    for (size_t compare_indx = select_indx +1; compare_indx < size; compare_indx++)
    {
      if(vector_values.at(compare_indx) < smallest_value)
      {
        smallest_value = vector_values.at(compare_indx);
        smallest_indx = compare_indx;
      }
    }
    swap(vector_values.at(smallest_indx), vector_values.at(select_indx));

  }
}