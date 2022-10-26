//	Handling exceptions in case of constructor & destructor :-

// # What will happen if exception is thrown from constructor ??

// Note - 
// 1] If exception is thrown from constructor, means your object is not in a valid state (i.e. not created yet).
//	  Hence, we can't use that object & also No destructor will be called for such object.
// 2] i.e We can't access/use object whose constructor is throwing an exception. Also no destructor is called for
//	  such object. Bcz, object is not in valid state.

#include<iostream>
using namespace std;

class Num
{
	public:
		Num()
		{
			cout<<"\nIn constructor";
			throw 5;	// throwing an exception from constructor
		}
		~Num()		//will not called as object is in valid state due to throw statement in constructor
		{
			cout<<"\nIn destructor";
		}
};

int main()
{
	try
	{
		Num obj;
		cout<<"\nobject created";
	}
	catch(int x)
	{
		cout<<"\nException caught";
	}
	
	return 0;
}
