
// This program reads numeric data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream infile;
  string filename= "scores.txt";
  
  infile.open(filename); // open the file in read mode
  
  if (infile.fail() == false) // we were able to open the file successfully
  { // perform the calculations here
  
  
  } 
  else
  {
    cout << "Could not open the file: " << filename << endl;
  }

  return 0;
}
