// Name and purpose of the program here
// @author:

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std; 


// implementation of the selection sort algorithm
void selection_sort(vector<int> & vector_values);

// Returns a random number within the range low and high
unsigned get_rand_in_range(unsigned low_limit, unsigned high_limit);


int main()
{
  srand(time(0)); 

  //in order to generate random numbers
  int number_of_values = 0;
  cout<<"\nEnter the number of values: ";
  cin>> number_of_values;
  // allocate memory for the array dynamically
  // use array_values as if it is an array variable
  int * array_values = new int[number_of_values];
  
  // do all the required operations here



  // deallocate memory for the array
  delete [] array_values;
  
  
  return 0;
}


// function definitions here
// swaps the values of the first and last
void swap(int & first, int & last)
{
  int temp = first;
  first = last;
  last = temp;
}

// implementation of the selection sort algorithm
void selection_sort(vector<int> & vector_values)
{
  for(int pass = 0; pass<vector_values.size()-1; pass++)
  { int minimum = vector_values[pass];
    int minimum_index = pass;
    for(int index= pass + 1; index<vector_values.size(); index++)
    {
      if (minimum> vector_values[index])
      {
        minimum = vector_values[index];
        minimum_index = index;
      }
    }
    swap(vector_values[minimum_index], vector_values[pass]);
  }
}



// Returns a random number within the range low and high
int get_rand_in_range(int low_limit, int high_limit)
{
  int random_number=0;
  // generate the random number
  random_number = low_limit + rand() % (high_limit - low_limit + 1); 
  return random_number;
}
