// Practice Questions
// Q. complete the code for given main() function.

#include<iostream>
using namespace std;

class Num
{
	int x,y;
	public:
		
		void scan()	//non-static member function, object is available in function.
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		
		static void show(Num Temp)	//static member function, object is not available, we have to pass explicitly
		{
			cout<<"\nx = "<<Temp.x<<"\ty = "<<Temp.y;
		}
};

int main()
{
	Num T1,T2;
	T1.scan();
	T2.scan();
	Num::show(T1);
	Num::show(T2);
	return 0;
}


