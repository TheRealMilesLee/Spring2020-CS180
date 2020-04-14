//@author: Kafi Rahman
// advantage of using parallel arrays in C++

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>


using namespace std;

/**
* This function receives a floating point score value and returns a character
* that represents the letter grade based on the score
*/

char calculateGrade(float score);

/**
* This function displays the fNam, lName, score and the letteGrade in a formatted way
*
*/
void displayRecord(string fName, string lName, float score, char letterGrade);



// the main function
int main()
{
	const int SIZE
	ifstream infile ("data.txt");
	
	// create three arrays of same size (parallel)
	// read the values to the arrays from the file
	
	// loop through all the elements of the array
		// get the score value from the score array at the index position
		// calculate letter grade for the student
		// display student name, score, and the letter grade to the console
		// -- by using the displayRecord function


	infile.close();
	
	return 0;
}




/**
* This function receives a floating point score value and returns a character
* that represents the letter grade based on the score
*/

char calculateGrade(float score)
{
	char grade = 'F';
	if(score>=90) grade = 'A';
	else if (score>=80) grade = 'B';
	else if(score>=70) grade = 'C';
	else if((score>=60) grade = 'D';
	
	return grade;
}



/**
* This function displays the fNam, lName, score and the letteGrade in a formatted way
*
*/
void displayRecord(string fName, string lName, float score, char letterGrade)
{
	cout<<fName<<" "<<lName<<"\t"<<score<<"\t"<<letterGrade<<endl;
}

