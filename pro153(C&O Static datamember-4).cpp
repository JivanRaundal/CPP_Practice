//						CLASS AND OBJECT
// STATIC DATAMEMBERS:-
// Note - We can access static datamembers using object & .(dot) operator also. But it does not change the concept of 
//        static. Even if you access it using object name and .(dot) operator, static member will only work for class.
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		static int x;
		int y;
};

int Num::x;

int main()
{
	Num T1,T2,T3;
	cout<<"\nx = "<<Num::x;
	Num::x = 15;
	cout<<"\nT1.x = "<<T1.x;
	T2.x = 90;
	cout<<"\nx = "<<Num::x;
	return 0;
}
