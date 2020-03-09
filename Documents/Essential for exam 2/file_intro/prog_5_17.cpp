// Gaddis Program 5-17, page 275
// This program writes user input to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output_file;
  output_file.open("numbers.txt");

  cout << "Enter three integer numbers: ";
  int number1, number2, number3;
  cin >> number1>> number2 >> number3;
  
  cout << number1 << endl;
  cout << number2 << endl;
  cout << number3 << endl;

  output_file << number1 << endl;
  output_file << number2 << endl;
  output_file << number3 << endl;

  output_file.close();
  cout << "Done. The numbers were saved to a file." << endl;
  return 0;
}
