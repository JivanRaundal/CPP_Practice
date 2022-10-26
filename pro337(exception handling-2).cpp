//			EXCEPTION HANDLING
// # There are 2 ways to handle runtime errors/exception :-
// 		1) Using if-else
//      2) Using exception handling i.e. using try-catch block
// Note - try, throw & catch are keywords used in exception handling.
// 1] try :- try block contains suspected code or doubtfull code OR contains suspected statements & all other statements
//			 related to it.
// 2] throw :- throw keyword is used to throw exception.
// 3] catch :- It is also called as Exception Handler. It contains code to handle exception.
// eg- 2) Using try-catch block

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"\nEnter a & b :\n";
	cin>>a>>b;
	
	try			//try block
	{
		if(b==0)
		{
			throw 5;	//throw point
		}
		c = a / b;
		cout<<"\nAns = "<<c;
	}
	catch(int x)	//catch block - exception handler & not function call
	{
		cout<<"\nDivide by zero error";
	}
	
	return 0;
}
