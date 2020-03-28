// A program to illustrate modifying a pass-by-value parameter in
// a function. This is not a realistic program, it is designed to
// illustrate.

#include <iostream>
using namespace std;

int main()
{
  int foo = 500;
  int &ref_var = foo; // reference variable

  ref_var = 100; // change the value

  cout << "Original: " << foo << endl;
  cout << "Reference Variable: " << ref_var << endl;

  return 0;
}
