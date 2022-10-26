//	Exception Handling
// # Nested try-catch block :-

// Note - In this case executor will try to find matching catch in Inner scope if not found then will try to find
//		  matching catch in Outer scope.

#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"\nEnter value of x : ";
	cin>>x;
	
	try
	{
		try
		{
			if(x == 5)
			{
				//throw 1;		//Inner catch will be matched
				throw 1.5;	//Outer catch will be matched
			}
			cout<<"\nx = "<<x;
		}
		catch(int a)
		{
			cout<<"\nException caught in Inner catch";
		}
		cout<<"\nAfter Inner catch";
	}
	catch(double b)
	{
		cout<<"\nEception caught in Outer catch";
	}
	cout<<"\nAfter Outer catch";
	
	return 0;
}
