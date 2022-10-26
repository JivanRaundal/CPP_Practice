//	Rethrowing an exception :-

// Note :- (hindi) exception jis try block me generate hoke throw hoga ussi try ke catch ke saath match find karega.
// eg - Rethrowing an exception

#include<iostream>
using namespace std;

int main()
{
	try					//Outer try block
	{
		try				//Inner try block
		{
			throw 5;
		}
		catch(int x)	//Inner catch block
		{
			cout<<"\nException caught in Inner catch";
			throw x;	//Rethrowing an exception
		}
		catch(...)		//universal catch (... is called as ellipsis)
		{
			cout<<"\nException caught in universal catch";
		}
	}
	catch(int x)
	{
		cout<<"\nException caught in Outer catch";
	}
	cout<<"\nAt the end";
	
	return 0;
}
