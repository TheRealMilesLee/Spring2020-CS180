//Hengyi Li
//This Program is to calculate the power of n
//This Program finished by Hengyi Li on 11：00 AM, 3 March, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
  //Input the values of number
  unsigned numbers;
  cout << "please input the value: ";
  cin >> numbers;
  while (numbers < 0 || numbers > 20)
  {
    cout << "Invalid input, please try again";
    cin >> numbers;
  }

  //Input the powers of number
  unsigned powers;
  cout << "please input the power of value: ";
  cin >> powers;
  while (numbers < 0 || numbers > 10)
  {
    cout << "Invalid input, please try again";
    cin >> powers;
  }

  //Calculate the result
  unsigned result = 1;
  for (unsigned looptimes = 0; looptimes < powers; looptimes++)
  {
    result *= numbers;
  }

  //Result print out
  cout << "power of the number is: " << result << endl;

  return 0;
}
