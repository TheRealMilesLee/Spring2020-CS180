//Hengyi Li
//This Program is to calculate the price of the order
//This Program finished by Hengyi Li on 11:05 AM, 11 Feb, 2020
//Copyright © 2020 Hengyi Li. All rights reserved.
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
  const double TWININGS_UNIT = 0.35;
  const double TETLEY_UNIT = 0.85;
  const double LIPTON_UNIT = 1.10;
  const unsigned PRECISION = 2;
  const unsigned LABEL_WIDTH_Twinings = 14;
  const unsigned LABEL_WIDTH_Tetley = 12;
  const unsigned LABEL_WIDTH_Lipton = 12;
  const unsigned LABEL_WIDTH_BONUS = 10;

  const int MAX_BONUS = 5;
  const int MIN_BONUS = 1;

  // generating a random number between (and including) MAX and MIN value

  unsigned seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  double bonus_discount = static_cast<double>(rand() % (MAX_BONUS -
    MIN_BONUS + 1) + MIN_BONUS);


  //
  cout << "Welcome to Truman Tea Store!" << endl;
  cout << "Enter your name: ";
  string name;
  getline(cin, name);

  cout << "How many ounces of Twinings, Tetley, and Lipton? ";
  // declare variables and use cin to get values from the user
  double Twinings;
  double Tetley;
  double Lipton;
  cin >> Twinings;
  cin.ignore();
  cin >> Tetley;
  cin.ignore();
  cin >> Lipton;

  // calcualte the price
  double Amount_Twinings = Twinings * TWININGS_UNIT;
  double Amount_Tetley = Tetley * TETLEY_UNIT;
  double Amount_Lipton = Lipton * LIPTON_UNIT;
  double total =  Amount_Lipton + Amount_Tetley + Amount_Twinings;
  double Grand_Total = total + bonus_discount;

  // and printe them by using setw(), setprecision, fixed etc
  cout << "Invoice for " << name << endl << endl;
  cout << "                   Twinings     Tetley      Lipton  " << endl;
  cout << "                  ----------  ----------  ----------" << endl;
  cout << "Quantity (oz) " << setw(LABEL_WIDTH_Twinings)
       << setprecision(PRECISION) << fixed << Twinings << setw(LABEL_WIDTH_Tetley)
       << Tetley << setw(LABEL_WIDTH_Lipton) << Lipton << endl;
  cout << "Unit Price    " << setw(LABEL_WIDTH_Twinings) << TWININGS_UNIT
       << setw(LABEL_WIDTH_Tetley) << TETLEY_UNIT << setw(LABEL_WIDTH_Lipton)
       << LIPTON_UNIT << endl;
  cout << "Amount        "  << setw(LABEL_WIDTH_Twinings) << Amount_Twinings
       << setw(LABEL_WIDTH_Tetley) << Amount_Tetley << setw(LABEL_WIDTH_Lipton)
       << Amount_Lipton << endl;
  cout << endl << "Total:          " << setw(LABEL_WIDTH_Tetley)
       << total << endl;
  cout << "Bonus Dicount:" << setw(LABEL_WIDTH_BONUS) << "-"
       << bonus_discount << endl;
  cout << "Grand Total:    " << setw(LABEL_WIDTH_Tetley)
       << Grand_Total << endl;

  cout << endl << "Thank you for ordering!" << endl;

  return 0;
}
