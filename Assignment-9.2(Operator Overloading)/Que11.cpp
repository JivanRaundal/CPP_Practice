// Q 11]. Create 2 runtime objects. Scan values for x & y using constructor, print values of x & y using destructor for 2 runtime 
// 		  objects.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		~Number()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number *p,*q;	//p & q are pointer to object of type Number
	//creating runctime objects
	p = new Number();
	q = new Number();
	
	//Note - destructor for runtime objects does not execute automatically, we have to delete explicitly to call destructor 
	delete p;
	delete q;
	return 0; 
}
