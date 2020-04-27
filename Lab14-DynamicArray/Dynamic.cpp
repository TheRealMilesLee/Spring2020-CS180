//Hengyi Li
//This program is to print out the random number in ascending and descending
//This Program has been done by Hengyi Li on 6:19 PM, April 26, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

/**
 * This function is to sort the vector
 * @param vector_values is the vector that need to sort
 */
void selection_sort(vector<int> & vector_values);

/**
 * This function is used to get the random number in range
 * @param low_limit is the lowest value
 * @param high_limit is the highest values
 * @return the random number that generated.
 */
int get_rand_in_range(int low_limit, int high_limit);

int main()
{
  const unsigned MAX = 1;
  const unsigned MIN = 100;
  int seed = (time(nullptr));
  srand(seed);
  int number_of_values = 0;
  cout << "Enter the number of values: ";
  cin >> number_of_values;
  int lowest_limit;
  cout << "Enter the lowest limit: ";
  cin >> lowest_limit;
  int highest_limit;
  cout << "Enter the highest limit: ";
  cin >> highest_limit;

  vector<int> array_values_vector;
  int *array_values = new int[number_of_values];
  for (unsigned looptimes = 0; looptimes < number_of_values; looptimes++)
  {
    array_values[looptimes] = get_rand_in_range(lowest_limit,highest_limit);
    array_values_vector.push_back(array_values[looptimes]);
  }
  selection_sort(array_values_vector);

 // Ascending the values //
  cout << endl << "The values in order: [";
  for(unsigned looptimes = 0; looptimes < array_values_vector.size() - 1;
  looptimes++)
  {
    cout << array_values_vector.at(looptimes) << ", ";
  }
  cout << array_values_vector.at(array_values_vector.size() - 1) << "]";

  // Descending the Values //
  cout << endl << "The values in reverse order: [";
  for(unsigned looptimes = array_values_vector.size(); looptimes > 1;
  looptimes--)
  {
    cout << array_values_vector.at(looptimes - 1) << ", ";
  }
  cout << array_values_vector.at(0) << "]" << endl;

  unsigned largest = MAX;
  unsigned smallest = MIN;
  for(unsigned looptimes = 0; looptimes < array_values_vector.size() - 1;
  looptimes++)
  {
    if(array_values_vector.at(looptimes) > largest && array_values_vector
    .at(looptimes) < smallest)
    {
      smallest = array_values_vector.at(looptimes);
    }
    else
    {
      largest = array_values_vector.at(looptimes);
    }
  }
  cout << "The smallest value in the array is:" << smallest << endl;
  cout << "The largest value in the array is: " << largest << endl;
  delete [] array_values;
  return 0;
}

void selection_sort(vector<int> & vector_values)
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

int get_rand_in_range(int low_limit, int high_limit)
{
  int random_number = rand() % (high_limit - low_limit + 1) + low_limit;
  return random_number;
}
