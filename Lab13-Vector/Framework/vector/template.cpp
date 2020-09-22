// Name and purpose of the program here
// @author: Kafi Rahman

#include <iostream>
#include <vector>
#include <time.h>

using namespace std;
 
// implementation of the selection sort algorithm
void selection_sort(vector<int> &vector_values);

// Returns a random number within the range low and high
int get_rand_in_range(int low_limit, int high_limit);

// *************************************

// assign random values to the array by using the gen_rand_in_range function
void input_random_values(vector<int> &values, int size)
{
    // the range of the randome numbers are given
    const int min_range = 1;
    const int max_range = 100;

    for (int i = 0; i < size; i++)
    {
        // make use of the get_rand_in_range function
        // get a value and push that in the vector
    }
}

// *************************************
// this function counts the number of even and odd values in the vector
void count_even_odd_values(vector<int> &values, int &odd_count, int &even_count);

// *************************************
/* display all the values of the vector */
void display(const vector<int> &values, int odd_count, int even_count);

// *************************************
// driver program
int main()
{
    srand(time(0)); // in order to generate random numbers
    int number_of_values = 0;
    cout << "\nEnter the number of values: ";
    cin >> number_of_values;

    vector<int> my_values;                            // declare a vector variable
    input_random_values(my_values, number_of_values); // call the function to input values

    selection_sort(my_values); // sort the vector in ascending order

    int odd_count, even_count;
    // this function counts the number of even and odd values in the vector
    // call the count_even_odd_values function

    // display everything
    // call the display function and display everything

    return 0;
}

// function definitions here
// *************************************

// Returns a random number within the range low and high
int get_rand_in_range(int low_limit, int high_limit)
{
    int random_number = 0;
    // generate the random number
    random_number = low_limit + rand() % (high_limit - low_limit + 1);
    return random_number;
}

// *************************************
// implementation of the selection sort algorithm
void selection_sort(vector<int> &vector_values)
{
    for (unsigned pass = 0; pass < vector_values.size() - 1; pass++)
    {
        int minimum = vector_values[pass];
        int minimum_index = pass;
        for (unsigned index = pass + 1; index < vector_values.size(); index++)
        {
            if (minimum > vector_values[index])
            {
                minimum = vector_values[index];
                minimum_index = index;
            }
        }
        // swap the values
        int temp = vector_values[minimum_index];
        vector_values[minimum_index] = vector_values[pass];
        vector_values[pass] = temp;
    }
}
