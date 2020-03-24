//Hengyi Li
//This Program is to get the grade report
//This Program finished by Hengyi Li on 6：01 PM, 18 March, 2020
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  const unsigned PRECISION = 2;
  const unsigned PRECISION_FOR_TOTAL = 0;
  const unsigned WIDTH = 21;
  const unsigned WIDTH_BETWEEN_LINE = 10;
  const double A_GRADE = 90.0;
  const double B_GRADE = 80.0;
  const double C_GRADE = 70.0;
  const double D_GRADE = 60.0;
  ifstream infile;
  string filename= "../scores.txt";

  // open the file in read mode
  infile.open(filename);

  // we were able to open the file successfully
  if (!infile.fail ())
  {
    unsigned number_of_scores;
    infile >> number_of_scores;
    infile.ignore();

    string line;

    //output preparation
    ofstream output_file;
    output_file.open("../grade_report.txt");

    //Formatting output
    output_file << "Student Name" << setw(WIDTH)
                << "Total" << setw(WIDTH_BETWEEN_LINE)
                << "Avg" << setw(WIDTH_BETWEEN_LINE) << "    "
                << "Grade" << setw(WIDTH_BETWEEN_LINE) << endl;

    while (getline(infile, line))
    {
      double average;
      double total_scores = 0;

      //Main Loop of the Names, Average score, Max score, Min score
      for (unsigned loop_times = 0; loop_times < number_of_scores; loop_times++)
      {
        //average scores
        unsigned numbers_read_from_the_text;
        infile >> numbers_read_from_the_text;

        total_scores += numbers_read_from_the_text;
        average = (total_scores / number_of_scores);


      }
      //move the cursor
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


    //close the file
    output_file.close();
    infile.close();
  }
  else
  {
    cout << "Could not open the file: " << filename << endl;
  }

  return 0;
}