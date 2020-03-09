#include <iostream>
using namespace std;

int main()
{
	int value = 10;
	
	int foo = 13;
	
	if(foo>12)
	{
		// this variable declaration is hiding
		// the previous variable, hence the
		// previous one is not accessible within the scope
		// of this redeclared variable
		int value = 20;
		cout<<" " << value;
	} // the scope ended here
	
	// this is the original value variable
	cout<<" " << value;
}

