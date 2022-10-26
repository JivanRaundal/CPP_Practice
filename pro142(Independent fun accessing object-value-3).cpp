// 					CLASS AND OBJECT
// INDEPENDENT FUNCTIONS (NON-MEMBER FUN) ACCESSING OBJECT OR IT'S VALUES.
// Q. Complete the following code for given main() function.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

void scan(Num & N)	//by reference
{
	cout<<"\nEnter x & y : ";
	cin>>N.x>>N.y;
}

int main()
{
	Num T1,T2;
	T1.scan();
	scan(T2);
	T1.show();
	T2.show();
	return 0;
}
