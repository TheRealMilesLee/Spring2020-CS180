// Gaddis Program 5-16, page 275
// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output_file;
  output_file.open("demofile.txt");

  cout << "Now writing data to the file" << endl;

  output_file << "Bach"<<" " ;
  output_file << "Beethoven"<<" ";
  output_file << "Mozart"<<" ";
  output_file << "Schubert"<<" ";

  output_file.close();
  cout << "Done." << endl;
  return 0;
}
