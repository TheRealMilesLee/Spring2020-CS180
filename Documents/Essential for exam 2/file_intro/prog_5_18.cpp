// Gaddis Program 5-18, page 277
// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  cout << "Enter the first names of three friends: ";

  string name1, name2, name3;
  cin >> name1>> name2>> name3;

  ofstream output_file;
  output_file.open("friends.txt");
  // writing contents to the file
  output_file << name1 << endl;
  output_file << name2 << endl;
  output_file << name3 << endl;
  
  output_file.close();
  cout << "Done. The names were saved to a file." << endl;
  return 0;
}
