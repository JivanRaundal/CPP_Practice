//	Inbuilt Classes of Exception 
// Header file => #include<stdexcept>
// Note :-
// 1] Base class of all exception classes is class "exception".
// 2] runtime_error class is derived from class exception.
// 3] what() method => it is member function of class runtime_error.
// 4] runtime_error class does not have default constructor. Hence, we have to pass string (i.e. description) as a 
//    parameter to parameterized constructor of class runtime_error.
// 5] We can Override what() method.
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
	catch(runtime_error e)			//caught exception of type runtime_error class
	{
		cout<<"\nException caught = ";
		cout<<e.what();				//what() is member function of class runtime_class
	}
	cout<<"\nAt the end";
	
	return 0;
}
