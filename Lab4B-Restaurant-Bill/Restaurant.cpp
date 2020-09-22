//Hengyi Li
//A Program to calculate the bill
//This code done by Hengyi Li at 11:04 AM 4th Feb, 2020
//Copyright Hengyi Li
#include <iostream>

using namespace std;

int main()
{
  const double TAX = 6.75;

  double Meal_Cost;
  cout << "What is the meal charge?: ";
  cin >> Meal_Cost;

  double Tax_amount = Meal_Cost * TAX / 100;
  double Tip_amount = (Meal_Cost + TAX) * 20 / 100;
  double Total_cost = Meal_Cost + TAX + Tip_amount;

  cout << "Your meal cost is: " <<  Meal_Cost << endl;
  cout << "Tax amount:  " <<  Tax_amount << endl;
  cout << "Tip amount: " <<  Tip_amount << endl;
  cout << "Total cost: " <<  Total_cost << endl;
  
  return 0;
}
