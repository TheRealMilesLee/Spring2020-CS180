//Hengyi Li
//A Program to calculate and display on screen the correct diameter,
// circumference, and area of a circle radius value.
//This code done by Hengyi Li at 11:44 AM 28th Jan, 2020
//Copyright Hengyi Li
#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.1415;

  double radius;
  cout << "Please enter the radius of a circle: ";
  cin >> radius;

  cout << "For a circle with radius " << radius << endl;

  double diameter;
  diameter = radius * 2.0;
  cout << "The diameter is " << diameter << endl;
  cout << "The circumference is " << diameter * PI << endl;
  cout << "The area is " << (radius * radius) * PI << endl;

  return 0;
}
