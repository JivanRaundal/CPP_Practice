// 19. WAP to explain static variable.

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
	//cout<<"\ny = "<<y;  --> error bcz it's scope is limited.
	return 0;
}
