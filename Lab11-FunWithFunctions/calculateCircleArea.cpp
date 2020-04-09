//Hengyi Li
//This program is to calculate the area of circle
//This Program has been done by Hengyi Li on 6:11 PM, April 3, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>

using namespace std;

/**
 * This function is to calculate the area of circle
 * @param radius is the radius of the circle
 * @param areaVal is the result of the area value
 */
void calculateCircleArea(double radius, double &areaVal);

int main()
{
  double radius;
  cout << "Please Input the radius: ";
  cin >> radius;
  double areaVal;
  calculateCircleArea(radius, areaVal);
  cout << "The area value is: " << areaVal;
  return 0;
}
void calculateCircleArea(double radius, double &areaVal)
{
  const double PI = 3.142;
  areaVal = radius * radius * PI;
}