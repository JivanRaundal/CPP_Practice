// 					CLASS AND OBJECT
// INDEPENDENT FUNCTIONS (NON-MEMBER FUN) ACCESSING OBJECT OR IT'S VALUES.
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
};

void scan(Num & N1)	//by reference bcz changes want to save in original object
{
	cout<<"\nEnter value of x & y : ";
	cin>>N1.x>>N1.y;
}

void show(Num N2)	//by value bcz we don't want any changes to original object
{
	cout<<"\nx = "<<N2.x<<"\ty = "<<N2.y;
}

int main()
{
	Num obj, var;
	obj.x = 10;
	obj.y = 20;
	show(obj);
	
	scan(var);
	show(var);
	return 0;       
}
