// @author: Your name
// Purpose of the program

#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
  // normal rate of the items per oz
  const double BASE_PRICE_A = 39.99;
  const double BASE_PRICE_B = 59.99;
  const double BASE_PRICE_C = 69.99;
  const double DATA_COST_A = 9.99;
  const double DATA_COST_B = 4.99;
  
  char choice = 'A';
  
  cout << "Choose the plan (A, B, or C): ";
  cin>> choice;
  
  if(choice == 'A'){
      cout<<"Action for choice A"<<endl;
  }
  
  
  // use all your calculation and formating in this space
  
  
  cout<<"Thanks for using the program"<<endl;
  
  return 0;
}
