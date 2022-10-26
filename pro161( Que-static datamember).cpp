// Revision - static datamember
// Q. example of static datamember

#include<iostream>
using namespace std;

class Num
{
	public:
		static int x;	//static datamember
		int y;	//non-static
		
		void set()
		{
			x = 0;
			y = 0;
		}
		void change()
		{
			x = x + 1;
			y = y + 1;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int Num::x;
int main()
{
	Num T1,T2,T3;
	cout<<"\nNum::x = "<<Num::x;
	
	T1.set();
	T2.set();
	T3.set();
	
	T1.change();
	T1.show();
	
	T2.change();
	T2.show();
	
	T3.change();
	T3.show();
	
	T1.x = 90;
	cout<<"\nT2.x = "<<T2.x;
	return 0; 
}
