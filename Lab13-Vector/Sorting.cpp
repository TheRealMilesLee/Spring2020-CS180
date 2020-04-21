//Hengyi Li
//This program is to use vector variable and practice selection sort and
// value type search by using functions.
//This Program has been done by Hengyi Li on 9:30 PM, April 13, 2020.
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
 * This function is to get the max and min numbers
 * @param values is the vector we need to find
 * @return the max and min value
 */
unsigned max_and_min_numbers(const vector<int> &values);
/**
 * This function display all the values of the vector
 * @param values is the vector that contains all values
 * @param odd_count is the odd values
 * @param even_count is the even values
 */
void display(const vector<int> &values, int odd_count, int even_count);

int main()
{
  int number_of_values = 0;
  cout << "Enter the number of values: ";
  cin >> number_of_values;

  vector<int> my_values;
  input_random_values(my_values, number_of_values);
  selection_sort(my_values);

  int odd_count;
  int even_count;
  count_even_odd_values(my_values, odd_count, even_count);
  max_and_min_numbers (my_values);
  display (my_values, odd_count, even_count);
  return 0;
}

int get_rand_in_range(int low_limit, int high_limit)
{
  int seed = (time(nullptr));
  srand(seed);
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

}

void display(const vector<int> &values, int odd_count, int even_count)
{
  unsigned values_to_output = 0;
  for(unsigned looptimes = 0; looptimes < values.size(); looptimes++)
  {
    values_to_output = values.at(looptimes);
  }
  cout << "Generated values are: " << values_to_output
       << "Number of odd values: " << odd_count
       << "Number of even values: " << even_count;

}