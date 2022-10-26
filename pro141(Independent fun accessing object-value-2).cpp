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
			cout<<"\nEnter the value of x & y : ";
			cin>>x>>y;
		}
};

void show(Num N)
{
	cout<<"\nx = "<<N.x<<"\ty = "<<N.y;
}

int main()
{
	Num T;
	T.scan();
	show(T);
	return 0;
}
