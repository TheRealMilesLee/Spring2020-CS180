//Hengyi Li
//This Program is to do the loop printout
//This Program finished by Hengyi Li on 10：50 AM, 25 Feb, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.
#include <iostream>

using namespace std;

int main()
{
  unsigned numbers = 2;
  while (numbers < 1002)
  {
    if (numbers != 1000)
    {
      cout << numbers << " , ";
      numbers += 2;
    }
    else
    {
      cout << numbers;
      numbers += 2;
    }
  }
  return 0;
}

