#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[])
{

	/* Finds the maximum in a series of numbers */

	ifstream infile;
	infile.open("numbers.txt");
	int number = 0;

	infile >> number;

	/*Set max to be the first value */
	int max = number;

	while (infile >> number)
	{
		cout << "The read number: " << number << endl;

		if (number > max)
		{
			max = number;
			cout << "New Maximum is: " << max << endl;
		}
	}

	cout << "The maximum: " << max << endl;

	infile.close();
}