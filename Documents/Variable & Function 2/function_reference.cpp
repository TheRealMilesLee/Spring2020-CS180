// A program to illustrate modifying a pass-by-value parameter in
// a function. This is not a realistic program, it is designed to
// illustrate.

#include <iostream>
using namespace std;

/**
  changes a negative value to a postive value
  @param number the number of times hello should be printed
*/
void absoluteValue(int &number);

int main()
{
  int foo = -5;

  absoluteValue(foo);

  cout << "The value is: " << foo << endl;
  return 0;
}

void absoluteValue(int &number) // number is another name for the variable foo
{
  if (number < 0) // if the number is negative
  {
    number = -1 * number; // make it positive
  }
}
