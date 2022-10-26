//  						CLASS AND OBJECT
// NOTE:- Memory of the object having no any data member is 1 byte.
//        This memory is virtual memory.(virtual memory is concept of OS)
// This is bcz, Object is actual existing entity which has some memory.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
};

class Digit	//Digit class has no any data member
{
	public:
		void show()	//non-member fun for class Num
		{
			Num T;	//object of class Num(T) is local variable of function show() which is non-member fun()
			T.x = 10;	//So, we need object of class Num explicitly to access data-members of class Num in show().
			T.y = 20;
			cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
		}
};

int main()
{
	Digit var;
	cout<<"\nMemory of Digit class object var is : "<<sizeof(var)<<" bytes";	// 1 bytes - virtual memory
	var.show();
	return 0;
}
