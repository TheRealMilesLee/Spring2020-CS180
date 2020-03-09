// A program to illustrate a counter and an accumulator
// Get the average of a set of scores entered from the keyboard
// Jon Beck
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the act score: (0 to quit): ";

  unsigned act_score;
  cin >> act_score;

  unsigned count_of_scores = 0;
  unsigned sum_of_scores = 0;

  while (act_score != 0)
  {
    count_of_scores++;
    sum_of_scores += act_score;
    
    cout << "Enter the next score (0 to quit): ";
    cin >> act_score;
  }

  cout << "You entered " << count_of_scores << " scores\n";
  cout<<"\nThe sum is: "<< sum_of_scores;

  return 0;
}


