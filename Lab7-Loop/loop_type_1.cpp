//Hengyi Li
//This Program is to do the loop printout
//This Program finished by Hengyi Li on 10：45 AM, 25 Feb, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.
#include <iostream>

using namespace std;

int main()
{
  unsigned numbers = 1;
    while (numbers < 1018)
    {
      if (numbers != 1015)
      {
        cout << numbers << " , ";
        numbers += 3;
      }
      else
      {
        cout << numbers;
        numbers +=3;
      }
    }
    return 0;
}