#include <iostream>
#include <vector>
using namespace std;

struct student_info
{
    string name;
    unsigned id_number;
    unsigned score;
};
void display_student_info(const student_info &st_one, const student_info
&st_two);
int main()
{
  student_info st_one;
  student_info st_two;

  st_one.name = "Miles";
  st_one.id_number = 1365353;
  st_one.score = 100;

  st_two.name = "Xu";
  st_two.id_number = 101010102;
  st_two.score = 99;

  if (st_one.score == st_two.score && st_one.id_number == st_two.id_number
  && st_one.name == st_two.name)
  {
    cout << "They equal" << endl;
  }
  else
  {
    cout << "not equal" << endl;
  }
 display_student_info(st_one, st_two);
}
void display_student_info(const student_info &st_one, const student_info
&st_two)
{
  cout << st_one.name << " " << st_one.id_number << " " << st_one.score
       << endl
       << st_two.name << " " << st_two.id_number << " " << st_two.score;
}