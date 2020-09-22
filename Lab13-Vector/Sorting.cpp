//Hengyi Li
//This program is to use vector variable and practice selection sort and value type search by using functions.
//This Program has been done by Hengyi Li on 4:40 PM, April 21, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

/**
 * This function is to sort the vector
 * @param vector_values is the vector that needs to sort
 */
void selection_sort(vector<int> &vector_values);

/**
 * This function is to get a random number within the range low and high
 * @param low_limit is the lowest limit
 * @param high_limit is the highest limit
 * @return the random number that generated.
 */
int get_rand_in_range(int low_limit, int high_limit);

 /**
  * This function is to assign random values to the array
  * @param values is the vector that assign to
  * @param size is the size of the vector.
  */
void input_random_values(vector<int> &values, int size);

/**
 * This function counts the number of even and odd values in the vector
 * @param values is the vector that contain values
 * @param odd_count is the odd values
 * @param even_count is the even values
 */
void count_even_odd_values(vector<int> &values, int &odd_count, int &even_count);

/**
 * This function display all the values of the vector
 * @param values is the vector that contains all values
 * @param odd_count is the odd values
 * @param even_count is the even values
 */
void display(const vector<int> &values, int &odd_count, int &even_count);

int main()
{
  int seed = (time(nullptr));
  srand(seed);
  int number_of_values = 0;
  cout << "Enter the number of values: ";
  cin >> number_of_values;

  vector<int> my_values;
  input_random_values(my_values, number_of_values);
  selection_sort(my_values);

  int odd_count = 0;
  int even_count = 0;
  count_even_odd_values(my_values, odd_count, even_count);
  display (my_values, odd_count, even_count);
  return 0;
}

int get_rand_in_range(int low_limit, int high_limit)
{
  int random_number = rand() % (high_limit - low_limit + 1) + low_limit;
  return random_number;
}

void selection_sort(vector<int> &vector_values)
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
void input_random_values(vector<int> &values, int size)
{
  const unsigned MIN_RANGE = 1;
  const unsigned MAX_RANGE = 100;
  for (unsigned looptimes = 0; looptimes < size; looptimes++)
  {
    values.push_back(get_rand_in_range (MIN_RANGE,MAX_RANGE));
  }
}

void count_even_odd_values(vector<int> &values, int &odd_count, int &even_count)
{
  unsigned numbers;
 for (unsigned looptimes = 0; looptimes < values.size(); looptimes++)
 {
   numbers = values.at (looptimes);
   if (numbers % 2 == 0)
   {
     even_count++;
   }
   else
   {
     odd_count++;
   }
 }
}

void display(const vector<int> &values, int &odd_count, int &even_count)
{
  unsigned values_to_output = 0;
  const unsigned MAX = 1;
  const unsigned MIN = 100;
  unsigned largest = MAX;
  unsigned smallest = MIN;
  cout << endl << "Generated values are: ";
  for (unsigned looptimes = 0; looptimes < values.size() - 1; looptimes++)
  {
    cout << values.at(looptimes) << ", ";
  }
  cout << values.at(values.size() - 1) ;
  for(unsigned looptimes = 0; looptimes < values.size(); looptimes++)
  {

    values_to_output = values.at(looptimes);
    if(values_to_output > largest && values_to_output < smallest)
    {
      smallest = values_to_output;
    }
    else
    {
      largest = values_to_output;
    }
  }
  cout << endl << "Number of odd values: " << odd_count << endl
       << "Number of even values: " << even_count << endl
       << "The smallest value in the vector: " << smallest << endl
       << "The largest value in the vector: " << largest << endl;
}