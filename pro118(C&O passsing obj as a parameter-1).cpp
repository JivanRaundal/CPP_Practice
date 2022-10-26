//				CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER
// Rules for passing object(var of user defined datatype) as a parameter to function are same as normal variables & fun.
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		int y;
};

void myfun(Num var)	//independent function
{
	//cout<<x<<" "<<y;	//error
	cout<<"\nx = "<<var.x<<"\ty = "<<var.y;
}

int main()
{
	Num T1, T2;
	T1.x = 10;
	T1.y = 20;
	
	myfun(T1);	//here object T1 is passed as a parameter (by value)
	return 0;
}
