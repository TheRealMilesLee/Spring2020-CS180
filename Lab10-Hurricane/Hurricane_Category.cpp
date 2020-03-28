//Hengyi Li
// This program reads numeric data from a file.
//This Program has been done by Hengyi Li on 10:27 PM, March 26, 2020.
//Copyright @ 2020 Hengyi Li. All rights reserved.

#include <iostream>
#include <fstream>

using namespace std;

/**
 * This function is to get the file from disk and do further calculation
 */
void get_file();

/**
 * This function is to do the input validation
 * @param input_file is to get the file from the disk
 * @param filename is the name of file on the disk
 */
void input_validation(ifstream &input_file, string &filename);

/**
 * This function is to do the hurricane judgement
 * @param numbers is the speed of the hurricane
 * @param name  is the name of the hurricane
 * @param output_file is the file that output to
 */
void judgement(unsigned &numbers, string &name, ofstream &output_file);

int main()
{
  get_file ();
  return 0;
}

void get_file()
{
  ifstream input_file;
  string filename = "numbers.txt";
  input_file.open (filename);
  input_validation(input_file,filename);
}

void judgement(unsigned &numbers, string &name, ofstream &output_file)
{
  const unsigned MAX_SPEED_WIND = 157;
  const unsigned C4_SPEED_WIND = 130;
  const unsigned C3_SPEED_WIND = 111;
  const unsigned C2_SPEED_WIND = 96;
  const unsigned MIN_SPEED_WIND = 74;

  if (numbers  >= MAX_SPEED_WIND)
  {
    output_file << name << " is Category 5 Hurricane ";
  }
  else if (numbers >= C4_SPEED_WIND && numbers < MAX_SPEED_WIND)
  {
    output_file << name << " is Category 4 Hurricane ";
  }
  else if (numbers >= C3_SPEED_WIND && numbers < C4_SPEED_WIND)
  {
    output_file << name << " is Category 3 Hurricane ";
  }
  else if (numbers >= C2_SPEED_WIND && numbers < C3_SPEED_WIND)
  {
    output_file << name << " is Category 2 Hurricane ";
  }
  else if (numbers >= MIN_SPEED_WIND && numbers < C2_SPEED_WIND)
  {
    output_file << name << " is Category 1 Hurricane ";
  }
  else
  {
    output_file << name << " is Category 0 Hurricane ";
  }
}

void input_validation(ifstream &input_file, string &filename)
{
  if (!input_file.fail ())
  {
    string line;
    string name;
    unsigned numbers;
    //output preparation
    ofstream output_file;
    output_file.open("category.txt");
    while (input_file >> name, input_file >> numbers)
    {
      input_file.ignore();
      judgement(numbers, name, output_file);
      output_file << endl;
    }
    //close the file
    output_file.close();
    input_file.close ();
  }
  else
  {
    cout << "There was an error trying to open " << filename << endl;
  }
}