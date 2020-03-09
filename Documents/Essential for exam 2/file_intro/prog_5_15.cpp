// Gaddis Program 5-15, page 274
// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outfile;
  outfile.open("demofile.txt");

  cout << "Now writing data to the file" << endl;

  // exactly the way we would display
  // these values by using cout
  outfile << "Mara" << endl;
  outfile << "Tylor" << endl;
  outfile << "Andrew" << endl;
  outfile << "Malia" << endl;

  
  
  cout << "Done." << endl;
  
  outfile.close();
  return 0;
}
