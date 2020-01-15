//Hengyi Li
//This program calculate the area of a square
//This code done by Hengyi Li at 11:21 AM 14th Jan, 2020
//Copyright Hengyi Li
#include <iostream>
using namespace std;

int main()
{
  cout << "Welcome! This program calculates the area of a square" << endl;

  double length;
  double width;
  double area;

  //getting length of the square
  cout << "Enter the length of the square: ";
  cin >> length;

  //getting the width of the square
  cout <<"Enter the widthe of the queare: ";
  cin >> width;

  //calculate the area
  area = length * width;

  //Display the area
  cout << "The area of the quare is: " << area << endl;
  return 0;
}