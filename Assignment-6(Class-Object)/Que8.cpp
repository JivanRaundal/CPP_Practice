// Q 8] WAP to explain enumeration.

#include<iostream>
using namespace std;

enum color
{
	red,
	green,
	blue = 10,
	white
};

int main()
{
	cout<<"\nred = "<<red;
	cout<<"\ngreen = "<<green;
	cout<<"\nblue = "<<blue;
	cout<<"\nwhite = "<<white;
	return 0;
}
