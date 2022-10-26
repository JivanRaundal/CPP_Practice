// STATIC variable --> get memory on Data Section.
// STATIC = LOCAL(Scope) + GLOBAL(lifetime).

#include<iostream>
using namespace std;

void fun()
{
	int x=2;	//local var
	static int y=2;	//static var
	x=x+1;
	y=y+1;
	cout<<"\n\nX = "<<x;
	cout<<"\nY = "<<y;
}

int main()
{
	fun();
	fun();
	fun();
	return 0;
}
