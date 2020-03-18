//Hengyi Li
//This Program is to get the grade report
//This Program finished by Hengyi Li on 6：01 PM, 18 March, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <fstream>

using namespace std;

/**
 * This function is to get the file and do the process
 */
void Get_file();

/**
 * This files is to formatting the First line of the out put
 * @param output_file is used to get the file that output to
 */
void Formatting_output(ofstream &output_file);

/**
 * This function is to do the necessary calculation
 * @param infile is the origional student datafile
 * @param number_of_scores is the total quantity of the student scores
 * @param output_file  is the file to output with
 * @param line is the name of the student
 */
void calculation(ifstream &infile, unsigned &number_of_scores, ofstream
&output_file, string &line);

int main()
{
  Get_file ();
  return 0;
}

//Function declaration starts here.
void Get_file()
{
  ifstream infile;
  string filename= "../scores.txt";
  infile.open(filename);
  if (!infile.fail ())
  {
    unsigned number_of_scores;
    infile >> number_of_scores;
    infile.ignore();
    string line;
    //output preparation
    ofstream output_file;
    output_file.open("../grade_report.txt");
    Formatting_output(output_file);
    while (getline(infile, line))
    {
      calculation(infile, number_of_scores, output_file, line);
    }
    //close the file
    output_file.close();
    infile.close();
  }
  else
  {
    cout << "Could not open the file: " << filename << endl;
  }
}
void Formatting_output(ofstream &output_file)
{
  const unsigned WIDTH = 21;
  const unsigned WIDTH_BETWEEN_LINE = 10;
  output_file << "Student Name" << setw(WIDTH)
              << "Total" << setw(WIDTH_BETWEEN_LINE)
              << "Avg" << setw(WIDTH_BETWEEN_LINE) << "    "
              << "Grade" << setw(WIDTH_BETWEEN_LINE) << endl;
}

void calculation(ifstream &infile, unsigned &number_of_scores, ofstream
&output_file, string &line)
{
  const unsigned PRECISION = 2;
  const unsigned PRECISION_FOR_TOTAL = 0;
  const unsigned WIDTH = 21;
  const unsigned WIDTH_BETWEEN_LINE = 10;
  const double A_GRADE = 90.0;
  const double B_GRADE = 80.0;
  const double C_GRADE = 70.0;
  const double D_GRADE = 60.0;
  double average;
  double total_scores = 0;
  for (unsigned loop_times = 0; loop_times < number_of_scores; loop_times++)
  {
    unsigned numbers_read_from_the_text;
    infile >> numbers_read_from_the_text;

    //Total scores
    total_scores += numbers_read_from_the_text;
    //average scores
    average = (total_scores / number_of_scores);
  }
  infile.ignore();

  //output everything
  cout << "Now writing data to the file" << endl;
  output_file << left << setw(WIDTH) << line << right
              << setw(WIDTH_BETWEEN_LINE) << total_scores << "    "
              << setw(WIDTH_BETWEEN_LINE) << setprecision(PRECISION)
              << fixed << average << setprecision(PRECISION_FOR_TOTAL);

  //Grade Judgement
  if (average >= A_GRADE)
  {
    output_file << setw(WIDTH_BETWEEN_LINE) << "A" << endl;
  }
  else if (average >= B_GRADE && average < A_GRADE)
  {
    output_file << setw(WIDTH_BETWEEN_LINE) << "B" << endl;
  }
  else if (average >= C_GRADE && average < B_GRADE)
  {
    output_file << setw(WIDTH_BETWEEN_LINE) << "C" << endl;
  }
  else if (average >= D_GRADE && average < C_GRADE)
  {
    output_file << setw(WIDTH_BETWEEN_LINE) << "D" << endl;
  }
  else
  {
    output_file << setw(WIDTH_BETWEEN_LINE) << "F" << endl;
  }
  cout << "Done." << endl;
}