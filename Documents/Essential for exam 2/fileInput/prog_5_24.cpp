// Gaddis Program 5-24, page 287
// This program reads numeric data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const string  FILE_NAME = "list_of_numbers.txt";
  ifstream fin;
  fin.open(FILE_NAME);

  if (fin.fail() == false)
  {
    int value;
    
    // how would we read values from the console?
    
    // as long as we can read an integer value from the file
    // we should continue processing the file
    while(fin>>value)
    {
      cout<<"\n"<<value;
    }
    
    
    fin.close();
  }
  else
  {
    cout << "There was an error trying to open the file" << FILE_NAME << endl;
  }

  return 0; 
}
