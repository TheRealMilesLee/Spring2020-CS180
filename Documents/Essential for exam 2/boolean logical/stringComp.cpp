#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {	
	string first = "Fred";
	string last = "Monroe";
	
	if(first>=last)
	{
		cout<<"\nFred is greater than equal to Monroe";
	}
	else 
	{
		cout<<"\nFred is less than Monroe";
	}
	
	// this comparison should be avoided
	if("Fred"<="Monroe")
	{
		cout<<"\nFred is greater than equal to Monroe";
	}
	else 
	{
		cout<<"\nFred is less than Monroe";
	}
			
}