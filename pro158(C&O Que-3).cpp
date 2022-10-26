// Practice Questions
// Q. complete the code for given main() function.

#include<iostream>
using namespace std;

class Num
{
	int x,y;
	public:
		
		static void scan(Num & T)	//static member function
		{
			cout<<"\nEnter x & y : ";
			cin>>T.x>>T.y;
		}
		
		void show()	//non-static
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1,T2;
	Num::scan(T1);	//T1 is passed by reference as we wan't to store values to original object 
	Num::scan(T2);	//T2 is passed by reference as we wan't to store values to original object
	T1.show();
	T2.show();
	return 0;
}
