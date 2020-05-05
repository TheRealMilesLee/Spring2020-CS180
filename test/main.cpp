#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 10;
void string_reverse(const char line[],char reverse_string[]);

int main()
{
  const char line[SIZE] = {'a','b','c'};
  char reverse_string[SIZE];
  string_reverse(line,reverse_string);
  return 0;
}
void string_reverse(const char line[],char reverse_string[])
{
 for(int indx = SIZE, looptimes = 0; looptimes < SIZE; looptimes++)
 {
   reverse_string[indx] = line[looptimes];
   indx--;
 }
 for(int looptimes = 0; looptimes <= SIZE; looptimes++)
 {
   cout << reverse_string[looptimes];
 }
}