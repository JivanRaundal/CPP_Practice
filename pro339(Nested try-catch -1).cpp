//	Exception Handling
// # Nested try-catch block :-

#include<iostream>
using namespace std;

void myfun()
{
	int x;
	cout<<"\nEnter value of x : ";
	cin>>x;
	if(x == 5)
	{
		throw 1;	//will caught by catch block of main()
	}
	cout<<"\nx = "<<x;	
}

int main()
{
	try
	{
		myfun();
	}
	catch(int a)
	{
		cout<<"\nEception Caught";
	}
	cout<<"\nAfter catch";
	return 0;
}
