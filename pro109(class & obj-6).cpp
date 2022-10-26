//							CLASS AND OBJECT
// Q. Complete the following code.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x, y;
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

int main()
{
	Number T1, T2;
	T1.scan();
	T2.scan();
	
	T1.show();
	T2.show();
	return 0;
}
