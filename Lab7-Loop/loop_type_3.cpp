//Hengyi Li
//This Program is to do the loop printout
//This Program finished by Hengyi Li on 11：00 AM, 25 Feb, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
  const unsigned PRECISION = 2;
  unsigned numbers = 0;
  double sum = 0;

  cout << "Series: ";
  while (numbers < 400)
  {
    numbers++;
    cout << numbers << " ";
    sum += numbers;
  }

  cout << endl << "Sum of the series: " << sum << endl;
  double average = sum / 400.0;
  cout << "Average of the series: "  << setprecision(PRECISION) << fixed
       << average << endl;
  return 0;
}
