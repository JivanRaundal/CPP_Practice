// PASSING PARAMETERS TO MEMBER FUNCTION OF CLASS
// NOTE:- In the [void set(int a,int b)], a & b are local variables of function set() and not the data members of 
//        class. So they will get memory on set() functions stackframe and not in main() inside object.

#include<iostream>
using namespace std;

class Num
{
	private:
		int x, y;
	public:
		void set(int a,int b)	//a & b are local variables of set() function
		{
			x = a;
			y = b;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1, T2, T3;
	T1.set(10,20);
	T2.set(11,22);
	T3.set(5,7);
	
	cout<<"\nT1 data :";
	T1.show();
	cout<<"\nT2 data :";
	T2.show();
	cout<<"\nT3 data :";
	T3.show();
	return 0;
}
