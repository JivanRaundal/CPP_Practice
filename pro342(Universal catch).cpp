//	EXCEPTION HANDLING
// # Universal catch :-
// Note - Universal catch can caught any type (i.e. of any datatype) of Exception. user-defned type also.
// STNTAX - catch(...)	represented by three dots (...) as a argument
// eg - 

#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"\nEnter value of x : ";
	cin>>x;
	
	try
	{
		if(x == 5)
		{
			throw 'H';
		}
		cout<<"\nx = "<<x;
	}
	catch(int a)
	{
		cout<<"\nException caught in int catch";
	}
	catch(double d)
	{
		cout<<"\nException caught in double catch";
	}
	catch(...)		//universal caught
	{
		cout<<"\nEception caught in Universal catch";
	}
	cout<<"\nAfter all catches";
	
	return 0;
}
