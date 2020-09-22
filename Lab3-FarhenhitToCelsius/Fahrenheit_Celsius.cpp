// Hengyi Li
// A program to compute the Celsius equivalents of two Fahrenheit
// temperature values.
//This code done by Hengyi Li at 10:38 AM 28th Jan, 2020
//Copyright Hengyi Li

#include <iostream>
using namespace std;

int main()
{
  cout << "This program converts two Fahrenheit temperature readings "
       << "to Celsius" << endl;

  double fahrenheit_temp;
  cout << "Please enter the first Fahrenheit temperature: ";
  cin >> fahrenheit_temp;

  double celsius_temp = (fahrenheit_temp - 32.0) * (5.0 / 9.0);
  cout << "That is equal to " << celsius_temp << " degrees C" << endl;

  cout << "Please enter the second Fahrenheit temperature: ";
  cin >> fahrenheit_temp;

  celsius_temp = (fahrenheit_temp - 32.0) * (5.0 / 9.0);
  cout << "That is equal to " << celsius_temp << " degrees C" << endl;

  return 0;
}
