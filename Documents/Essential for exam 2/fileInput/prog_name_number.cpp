// @author: Kafi Rahman
// This program reads both test and numeric data from a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const string  FILE_NAME = "name_number.txt";
  ifstream fin; // file input handler variable
  fin.open(FILE_NAME);


  if (fin.fail() == false) // them the file open was successful
  {
    
    
    string name;
    int number;
    
    cout<<"\nEnter a name and a number: ";
    
    
    // as long as we can read a name from the file, we should
    // continue processing the file
    while(getline(fin, name))
    {
      fin>> number;
    
      fin.ignore();
    
    
    // displaying the read values
    cout<<"\n"<<name<<" > "<<number<<endl;
    }

    
    // done processing the file
    fin.close();
  }
  else // file open was not successful
  {
    cout << "There was an error trying to open the file" << FILE_NAME << endl;
  }

  return 0; 
}
