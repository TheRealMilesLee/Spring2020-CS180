//Gaddis Program 5-3 page 238
#include <iostream>
using namespace std;

int main() {
	int i =0 ;
	cout<<"Before the loop"<<endl;
	while(i<100)
	{
		if(i%2==1)
		cout<<i<<endl;
		i++;
	}
	cout<<"After the loop"<<endl;
} 