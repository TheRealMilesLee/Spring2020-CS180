#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
  const double TWININGS_UNIT = 0.35;
  const double TETLEY_UNIT = 0.85;
  const double LIPTON_UNIT = 1.10;

  const int MAX_BONUS = 5;
  const int MIN_BONUS = 1;

  // generating a random number between (and including) MAX and MIN value
  srand(time(0));
  int bonus = 0;


  //
  cout << "Welcome to Truman Tea Store!" << endl;
  cout << "Enter your name: ";
  string name;
  getline(cin, name);

  cout << "How many ounces of Twinings, Tetley, and Lipton? ";
  // declare variables and use cin to get values from the user

  // calcualte the price and printe them by using setw(), setprecision, fixed etc

  cout << "Thank you for ordering!" << endl;

  return 0;
}
