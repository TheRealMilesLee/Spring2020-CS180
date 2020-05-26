#include <iostream>
using namespace std;

void eat(double meals);
void sleep(unsigned hours);
void code(unsigned time);
void have_class(unsigned classes);
void game(unsigned gametime);

int main()
{
  double meals = 0;
  unsigned hours =  24;
  unsigned time = 0;
  unsigned classes = 0;
  unsigned gametime = 0;
  bool death = false;

  while(!death)
  {
    unsigned health_value = 1;
    if (health_value > 0)
    {
      eat(meals);
      sleep(hours);
      code(time);
      have_class(classes);
      game(gametime);
    }
    else
    {
      death = true;
    }
  }
  return 0;
}

void eat(double meals)
{
  bool hungry = false;
  unsigned worktime = 0;
  while (!hungry)
  {
    cout << "I'm not hungry, keep working" << endl;
    worktime++;
    if (worktime > 5)
    {
      hungry = true;
    }
    meals++;
  }
}

void sleep(unsigned hours)
{
  for (unsigned time = 0; time < 24; time++)
  {
    if (time < 8 && time > 1)
    {
      hours = time + 6;
    }
    else
    {
      hours = 0;
    }
  }
}

void code(unsigned time)
{
  string day;
  for (unsigned looptimes = 0; looptimes <= 7; looptimes++ )
  {
    cout << "What day is today? " << endl;
    cin >> day;
    if (day == "Tuesday" && day == "Thursday")
    {
      time == 12;
    }
    else
    {
      time == 2;
    }
  }
}

void have_class(unsigned classes)
{
  string day;
  for (unsigned looptimes = 0; looptimes <= 7; looptimes++ )
  {
    cout << "What day is today? " << endl;
    cin >> day;
    if (day != "Saturday" && day != "Sunday")
    {
      classes = 2;
    }
    else
    {
      classes = 0;
    }
  }
}

void game(unsigned gametime)
{
  string day;
  for (unsigned looptimes = 0; looptimes <= 7; looptimes++ )
  {
    cout << "What day is today? " << endl;
    cin >> day;
    bool paper_time;
    paper_time = day != "Saturday" && day != "Sunday";
    bool death = false;
    unsigned happy_value = 0;
    while (!paper_time && happy_value == 0)
    {
      gametime = 2;
      happy_value++;
    }
  }
}