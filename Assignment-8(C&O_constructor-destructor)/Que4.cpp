// Q 4]. WAP to create constant object & access it. Define a class of your choice.
// Note - constant objects can call only constant member functions.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;	
		}
		void change(Number & T)	const	//constant member function
		{
			// x = 35;	//error, cannot change constant object members
			//but we can access them-
			T.x = x + 5;
			T.y = y + 3;
		}
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number var;
	var.scan();
	var.print();
	// Note - constant object at the time of declaration must be initialize, otherwise compiler gives error
	const Number obj = {10,20};		//constant object
	obj.change(var);	//obj can call change bcz change() is constant member function
	var.print();
	return 0;
}
