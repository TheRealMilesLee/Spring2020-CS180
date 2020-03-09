// Gaddis Program 5-22, page 284
// This program reads numeric data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin;
  fin.open("list_of_numbers.txt");

  unsigned int value; 
  
  // how would we read values from the console?
  
  // as long as we can read an integer value from the file
  // we should continue processing the file
  while(fin>>value)
  {
    cout<<"\n"<<value;
  }

  fin.close();
  return 0;
}
