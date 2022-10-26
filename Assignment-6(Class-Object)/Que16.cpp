// Q 16] Scan & print details of 2 objects of class Digit using member functions getdata() & showdata() of class Number.

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x;
		int y;
};

class Number
{
	public:
		void getdata(Digit & D)
		{
			cout<<"\nEnter x & y : ";
			cin>>D.x>>D.y;
		}
		void printdata(Digit D)
		{
			cout<<"\nx = "<<D.x<<"\ty = "<<D.y;
		}
};

int main()
{
	Digit D1,D2;
	Number T;
	
	T.getdata(D1);
	T.printdata(D1);
	T.getdata(D2);
	T.printdata(D2);
	return 0;
}
