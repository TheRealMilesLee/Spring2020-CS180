//Hengyi Li
//This program is to find the maxium value
//This Program has been done by Hengyi Li on 6:11 PM, April 3, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.
#include <iostream>

using namespace std;

/**
 * This function is to find the maxium value
 * @param firstVal  is the first value input from user
 * @param secondVal is the second value input from user
 * @param thirdVal  is the third value input from user
 * @return the biggest value.
 */
unsigned findMaxium(unsigned firstVal, unsigned secondVal, unsigned thirdVal);

int main()
{
  unsigned firstVal;
  unsigned secondVal;
  unsigned thirdVal;
  cout << "Please input three values: ";
  cin >> firstVal >> secondVal >> thirdVal;
  cout << "The Max value is: " << findMaxium(firstVal, secondVal, thirdVal);
  return 0;
}
unsigned findMaxium(unsigned firstVal, unsigned secondVal, unsigned thirdVal)
{
  if(firstVal > secondVal && firstVal > thirdVal)
  {
    return firstVal;
  }
  else if (secondVal > firstVal && secondVal > thirdVal)
  {
    return secondVal;
  }
  else if (thirdVal > secondVal && thirdVal > firstVal)
  {
    return thirdVal;
  }
}
