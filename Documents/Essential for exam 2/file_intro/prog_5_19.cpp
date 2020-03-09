// Adapted from Gaddis Program 5-19, page 279
// This program reads data from a file.
// It uses getline instead of stream extraction.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream input_file;
  input_file.open("friends.txt");

  cout << "Reading data from the file" << endl;

  string name1, name2, name3;

  getline(input_file, name1);
  getline(input_file, name2);
  getline(input_file, name3);
  
  cout<<"\nRead names from the file are: "
  cout << name1 <<" "<< name2 <<" "<< name3;

  input_file.close();
  cout << "Done." << endl;
  return 0;
}
