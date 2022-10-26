// Q.19]

#include<iostream>
using namespace std;

void myfun()
{
	int x = 0;
	static int y = 0;
	x++;
	y++;
	cout<<"\nx = "<<x<<"\ty = "<<y;
}

int main()
{
	myfun();
	myfun();
	myfun();
	return 0;
}
