//	Handling exceptions in case of constructor & destructor :-

// # What will happen if exception is thrown from constructor ??

// Note - 
// 1] If exception is thrown from constructor, means your object is not in a valid state (i.e. not created yet).
//	  Hence, we can't use that object & also No destructor will be called for such object.
// 2] i.e We can't access/use object whose constructor is throwing an exception. Also no destructor is called for
//	  such object. Bcz, object is not in valid state.

// Note - No any try-catch block here to handle exception. Let's see what error we get..??
// Conclusion => As we can't access/use object whose constructor is throwing an exception. Also If we don't write any 
//				 try-catch block to handle exception thrown from constructor, we get message
//				 [terminate called after throwing an instance of 'int'] & error with return value other than zero.

#include<iostream>
using namespace std;

class Num
{
	public:
		Num()
		{
			cout<<"\nIn constructor\n";
			throw 5;	// throwing an exception from constructor
		}
		~Num()		//will not called as object is in valid state due to throw statement in constructor
		{
			cout<<"\nIn destructor\n";
		}
};

int main()
{
	Num obj;
	cout<<"\nObject created";
	cout<<"\nusing object here";
	
	return 0;
}
