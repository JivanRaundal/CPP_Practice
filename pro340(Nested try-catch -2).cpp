//	Exception Handling
// # Nested try-catch block :-

// Note - In this case executor will try to find local matching catch i.e. in myfun() if not found, it will try to
//		  find matching catch in outer scope. i.e. in main()

#include<iostream>
using namespace std;

void myfun()
{
	int x;
	cout<<"\nEnter value of x : ";
	cin>>x;
	
	try
	{
		if(x==5)
		{
			//throw 1;		//will execute local catch whose para is int
			throw 1.5;		//will execute outer catch whose para is double
		}
		cout<<"\nx = "<<x;
	}
	catch(int a)
	{
		cout<<"\nException caught in called function myfun()";
	}
	cout<<"\nFunction Ends";
}

int main()
{
	try
	{
		myfun();
	}
	catch(double b)
	{
		cout<<"\nException caught in calling function main()";
	}
	cout<<"\nmain() ends";
	
	return 0;
}
