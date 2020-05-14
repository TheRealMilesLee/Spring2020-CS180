
#include <iostream>
#include <string>

using namespace std;

struct Movie
{
    string title;
    double run_time;
    int release_year;
};

string to_string(const Movie &movie);

int main()
{
  int number = 6;
  int x = 20;
  x /= --number;
  number *= x ++;
  cout << x <<" " << number << endl;
  return 0;
}
string to_string(const Movie &movie)
{
  string result = movie.title + "  " + to_string(movie.run_time) + "  " +
                  to_string(movie.release_year);
  return result;
}

