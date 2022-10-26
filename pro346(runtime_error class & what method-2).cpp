//	Inbuilt Classes of Exception 
// Header file => #include<stdexcept>
// Note :-
// 1] Base class of all exception classes is class "exception".
// 2] runtime_error class is derived from class exception.
// 3] what() method => it is member function of class runtime_error.
// 4] runtime_error class does not have default constructor. Hence, we have to pass string (i.e. description) as a 
//    parameter to parameterized constructor of class runtime_error.
// 5] We can Override what() method.

// Note - We have seen in runtime polymorphism that base class pointer can store address of object of it's own class
//		  as well as it can store address of object's of child class also. Same case is with normal objects also.
//		  i.e exception is base class & runtime_error is derived class (child class)
// eg-

#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int ans,a=10,b=0;
	
	try
	{
		if(b==0)
		{
			throw runtime_error("Divide by zero error");	//throw object of class runtime_error
		}
		cout<<"\nDivision Successfull";
	}
	catch(exception e)			//caught exception in exception class
	{
		cout<<"\nException caught = ";
		cout<<e.what();				//what() is member function of class runtime_class
	}
	cout<<"\nAt the end";
	
	return 0;
}
