//Hengyi Li
//This program is to  show the advantage of using parallel arrays in C++
//This Program has been done by Hengyi Li on 9:30 PM, April 13, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>


using namespace std;

/**
 * This function is to calculate the grade
 * @param score is to receive the value of the score.
 * @return the char that represents the letter grade based on the score
 */
string calculateGrade(double score);

/**
 * This function is to display the record
 * @param fName is the first name of the user
 * @param lName is the last name of the user
 * @param score is the score of the user
 * @param letterGrade is the grade of the user
 */
void displayRecord(string fName,  string lName, double score,
                  string letterGrade);

int main()
{
  const unsigned ARRAY_SIZE = 100;

  unsigned numbers_of_scores;
  ifstream infile;
  infile.open("data.txt");

  // create three arrays of same size (parallel)
  int scores[ARRAY_SIZE];
  string firstname[ARRAY_SIZE];
  string lastname[ARRAY_SIZE];
  double score;
  string fName;
  string lName;
  string letterGrade;
  // read the values to the arrays from the file
  infile >> numbers_of_scores;

  for (unsigned looptimes = 0; looptimes < numbers_of_scores; looptimes++)
  {
    infile >> scores[looptimes];
  }
  for (unsigned looptimes = 0; looptimes < numbers_of_scores; looptimes++)
  {
    infile >> firstname[looptimes];
  }
  for (unsigned looptimes = 0; looptimes < numbers_of_scores; looptimes++)
  {
    infile >> lastname[looptimes];
  }

  for (unsigned looptimes = 0; looptimes < numbers_of_scores; looptimes++)
  {
    score = scores[looptimes];
    letterGrade = calculateGrade (score);
    fName = firstname[looptimes];
    lName = lastname[looptimes];
    displayRecord (fName, lName, score, letterGrade);
  }
  infile.close();
  return 0;
}

string calculateGrade(double score)
{
  string grade = "F";
  if(score>=90)
  {
    grade = "A";
  }
  else if (score>=80)
  {
    grade = "B";
  }
  else if(score>=70)
  {
    grade = "C";
  }
  else if((score>=60) )
  {
    grade = "D";
  }
  else
  {
    grade = "E";
  }
  return grade;
}

void displayRecord(string fName, string lName, double score,
                  string letterGrade)
{
  cout << fName << " "
       << lName << "\t"
       << score << "\t"
       << letterGrade << endl;
}

