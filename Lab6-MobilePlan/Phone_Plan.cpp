//Hengyi Li
//This Program is to decide the phone plan
//This Program finished by Hengyi Li on 11：02 PM, 18 Feb, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.


#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
  // normal rate of the items per oz AND LABEL WIDES
  const unsigned LABEL_WIDTH = 13;
  const unsigned PRECISION = 4;
  const double BASE_PRICE_A = 39.99;
  const double BASE_PRICE_B = 59.99;
  const double BASE_PRICE_C = 69.99;
  const double ADDITIONAL_DATA_COST_A = 9.99;
  const unsigned DATA_PLAN_A = 4;
  const double ADDITIONAL_DATA_COST_B = 4.99;
  const unsigned DATA_PLAN_B = 8;
  const double DATA_COST_C = 0.00;


  char choice = 'A';

  cout << "Choose the plan (A, B, or C): ";
  cin >> choice;

  double data_usage;

  if(choice == 'A')
  {
    cout << "How many gigs of data did you use? ";
    cin >> data_usage;
    double data_a;
    if(data_usage <= DATA_PLAN_A)
    {
     data_a = 0.0;
    }
    else
    {
      data_a = (data_usage - DATA_PLAN_A) * ADDITIONAL_DATA_COST_A;
    }
    double invoice = data_a + BASE_PRICE_A;
    cout << "Base Cost:     " << setw(LABEL_WIDTH) << BASE_PRICE_A << endl;
    cout << "Data Cost:     " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         << data_a << endl;
    cout << "Invoice total: " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         << invoice << endl;
  }
  else if (choice == 'B')
  {
    cout << "How many gigs of data did you use? ";
    cin >> data_usage;

    double data_b;
    if(data_usage <= DATA_PLAN_B)
    {
      data_b = 0.0;
    }
    else
    {
      data_b = (data_usage - DATA_PLAN_B) * ADDITIONAL_DATA_COST_B;
    }
    double invoice = data_b + BASE_PRICE_B;

    cout << "Base Cost:     " << setw(LABEL_WIDTH) << BASE_PRICE_B << endl;
    cout << "Data Cost:     " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         << data_b << endl;
    cout << "Invoice total: " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         << invoice << endl;
  }
  else
  {
    double invoice = BASE_PRICE_C + DATA_COST_C;
    cout << "Base Cost:     " << setw(LABEL_WIDTH) << BASE_PRICE_C << endl;
    cout << "Data Cost:     " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         <<  DATA_COST_C << endl;
    cout << "Invoice total: " << setw(LABEL_WIDTH) << setprecision(PRECISION)
         << invoice << endl;
  }
  
  cout<<"Thanks for using the program"<<endl;

  return 0;
}
