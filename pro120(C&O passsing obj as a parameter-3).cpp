//  		CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER TO MEMBER FUNCTION 
// exapmple:
// NOTE:- In this example, T1 is passed implicitly (by address) to show() fun, But T2 is passed by value explicitly
//        So, actual values of T2 cannot be changed in show() function.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
		void show(Num var)
		{
			x = 9;
			y = 11;
			var.x = 9;
			var.y = 11;
		}
};

int main()
{
	Num T1, T2;
	T1.x = 10;
	T1.y = 20;
	T2.x = 90;
	T2.y = 95;
	
	T1.show(T2);
	
	cout<<"\nT1 Data :";
	cout<<"\nx = "<<T1.x<<"\ty = "<<T1.y;
	
	cout<<"\nT2 Data :";
	cout<<"\nx = "<<T2.x<<"\ty = "<<T2.y;
	return 0;
}
