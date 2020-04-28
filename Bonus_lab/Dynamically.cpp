//Hengyi Li
//This program is to dynamically allocated the array
//This Program has been done by Hengyi Li on 10:20 PM, April 26, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <random>
#include <ctime>

using namespace  std;

/**
 * This function is used to get the random number in range
 * @param low_limit is the lowest value
 * @param high_limit is the highest values
 * @return the random number that generated.
 */
int get_rand_in_range(int low_limit, int high_limit);

int main()
{
  const unsigned MAX = 100;
  const unsigned MIN = 10;
  int seed = (time(nullptr));
  srand(seed);
  unsigned elements;
  cout << "How many elements do you want? ";
  cin >> elements;
  int *array_values = new int[elements];
  vector<int> array_values_vector;

  cout << "Here are the random 5 elements: ";
  for(unsigned looptimes = 0; looptimes < elements; looptimes++)
  {
    array_values[looptimes] = get_rand_in_range(MIN,MAX);
    array_values_vector.push_back(array_values[looptimes]);
    cout << array_values_vector.at(looptimes) << " ";
  }

  cout << endl << "Here are the elements in reverse order: ";
  for(unsigned looptimes = array_values_vector.size(); looptimes > 1;
      looptimes--)
  {
    cout << array_values_vector.at(looptimes - 1) << " ";
  }
  cout << array_values_vector.at(0) << endl;
  delete [] array_values;
  return 0;
}

int get_rand_in_range(int low_limit, int high_limit)
{
  int random_number = rand() % (high_limit - low_limit + 1) + low_limit;
  return random_number;
}