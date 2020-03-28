#include <iostream>
#include <iomanip>
using namespace std;

/**
  This function calculates sum and average of two numbers
*/
void calculateValue(int firstValue, int secondValue, int &total);

int main()
{
  int firstNumber = 0, secondNumber = 0;
  cout << "This program inputs two numbers and calculates their sum and average." << endl;

  cout << "Enter first number: \t";
  cin >> firstNumber;

  cout << "Enter second number: \t";
  cin >> secondNumber;

  int sum = 0;
  calculateValue(firstNumber, secondNumber, sum);

  cout << endl
       << "Sum: \t" << sum << endl;
}

/**
  This function calculates sum and average of two numbers
  This program returns two values to the calling function
*/
void calculateValue(int firstValue, int secondValue, int &total)
{
  total = firstValue + secondValue;
}
