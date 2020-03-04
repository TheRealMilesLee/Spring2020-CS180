//Hengyi Li
//This Program is to calculate the factorial of n
//This Program finished by Hengyi Li on 10：55 AM, 3 March, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    //user input
    unsigned numbers;
    cout << "please input the value: ";
    cin >> numbers;

    //Validation for the input
    while (numbers < 0 || numbers > 20)
    {
      cout << "Invalid input, please try again";
      cin >> numbers;
    }

    //loop calculus begin
    unsigned factorial = 1;
    for (unsigned looptimes = 0; looptimes <= numbers + 1; looptimes++)
    {
      factorial *= numbers;
      numbers--;
    }

    //print out the result
    cout << "The factorial of the numbers is: " << factorial << endl;

    return 0;

    
}