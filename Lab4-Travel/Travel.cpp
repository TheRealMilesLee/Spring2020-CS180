//Hengyi Li
//A Program to calculate the MPG
//This code done by Hengyi Li at 10:47 AM 4th Feb, 2020
//Copyright Hengyi Li
#include <iostream>

using namespace std;
int main()
{
  double distance;
  cout << "What is the travel distance?: ";
  cin >> distance;
  unsigned full_tank_traveling_miles = 375;
  unsigned one_tank_of_gas = 15;
  unsigned refuel_times = distance / full_tank_traveling_miles;
  unsigned MPG = static_cast<unsigned>(distance) / (one_tank_of_gas * 
    refuel_times);
  cout << "Your car's MPG is " << MPG << " and on your "
  << distance <<
  " miles travel,you need to stop " << refuel_times << " time(s).";
  return 0;
}