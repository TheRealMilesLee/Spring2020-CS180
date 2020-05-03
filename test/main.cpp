#include <iostream>
#include <vector>
using namespace std;

bool findMutipleValues(const vector<int> &all_values);

int main()
{
  vector<int> all_values = {10, 2, 30, 40, 50};
  findMutipleValues(all_values);
  return 0;
}
bool findMutipleValues(const vector<int> &all_values)
{
  unsigned test = 0;
  for(unsigned looptimes = 0; looptimes<all_values.size(); looptimes++)
  {
    test += all_values.at(looptimes) % 5;
  }
  if (test != 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}