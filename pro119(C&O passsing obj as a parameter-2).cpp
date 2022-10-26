// 					CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER TO MEMBER FUNCTION 
// example:

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
		void show(Num var)	//here, var is local variable of show() function
		{
			cout<<"\nT1 Data :"; //as T1 is calling show() fun, members of show() become directly accessible in show()
			cout<<"\nx = "<<x<<"\ty = "<<y;	//Members of T1 are directly accessible in show() funcion.
			
			cout<<"\nT2 Data :"; //To print members of T2, we have to used var. bcz T2 is passed as a parameter
			cout<<"\nx = "<<var.x<<"\ty = "<<var.y;  //and copy of T2 is now in var.
		}
};

int main()
{
	Num T1, T2;
	T1.x = 10;
	T1.y = 20;
	T2.x = 5;
	T2.y = 7;
	
	T1.show(T2);	//T1 is passed implicitly (by address) & T2 is passed as a parameter explicitly (by value).
	return 0;
}


