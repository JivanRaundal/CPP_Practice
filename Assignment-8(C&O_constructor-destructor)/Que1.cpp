// Q 1] WAP to explain local classes.
// Local class is nothing but the class within funtion.

#include<iostream>
using namespace std;

void myfun();	//prototype
int main()
{
	class Num	//local class
	{
		public:
			int x,y;
			void scan()
			{
				cout<<"\nEnter x & y : ";
				cin>>x>>y;
			}
			void print()
			{
				cout<<"\nx = "<<x<<"\ty = "<<y;
			}
	};
	
	Num obj;
	obj.scan();
	obj.print();
	
	myfun();
}

void myfun()
{
	//Num var;	//error - cannot create object of Num class in myfun() bcz it is local class of main() function.
}
