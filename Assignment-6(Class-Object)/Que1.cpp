// Q 1] Write a program to explain local & static variable

#include<iostream>
using namespace std;

void myfun()
{
	int x = 1;;	//loacal variable
	static int y = 1;	//static variable
	
	x = x + 1;
	y = y + 1;
	
	cout<<"\nx = "<<x<<"\ty = "<<y; 
}

int main()
{
	myfun();
	myfun();
	myfun();
	return 0;
}
