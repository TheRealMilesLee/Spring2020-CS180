//Hengyi Li
//This program is to sort a random file
//This Program has been done by Hengyi Li on 7:03 PM, April 26, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace  std;

/**
 * This function is to write 1000 random numbers to the file
 * @param infile is the file that write in
 */
void write1000File(ofstream &infile);

/**
 * This function is to read the random and sort and display
 * @param file is the file that write in
 */
void readSortDisplay(ifstream &file);

/**
 * This function is to sort the vector
 * @param vector_values is the vector that need to sort
 */
void selection_sort(vector<int> &vector_values);

int main()
{
 ofstream infile;
 infile.open("random.txt");
 write1000File(infile);
 infile.close();

 ifstream file;
 file.open("random.txt");
 readSortDisplay(file);
 file.close();
 return 0;
}
void write1000File(ofstream &infile)
{
  const unsigned MIN_RANGE = 10;
  const unsigned MAX_RANGE = 500;
  int seed = (time(nullptr));
  srand(seed);
  for(unsigned looptimes = 0; looptimes < 1000; looptimes++)
  {
    int random_number = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;
    infile << random_number << " ";
  }
}

void readSortDisplay(ifstream &file)
{
  vector<int> values;
  unsigned value;
  while (file >> value)
  {
   values.push_back(value);
  }
  selection_sort(values);
  ofstream output;
  output.open("random.txt");
  for(unsigned looptimes = 0; looptimes< values.size() - 1; looptimes++)
  {
    output << values.at(looptimes) << " ";
  }
  output.close();
  
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