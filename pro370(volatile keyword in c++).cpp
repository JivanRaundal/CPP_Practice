#include<iostream>
using namespace std;

int main()
{
	//volatile int x = 5;
	int x=5;
	int y;
	y = ++x + x++;
	cout<<" "<<y;		//12 if volatile keyword is used else 13 (if volatile is not used)
	
	int a = -4;
	a = a<<1;
	cout<<"\nx = "<<a;
	
	return 0;
}
