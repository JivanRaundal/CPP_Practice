// Q 2]. complete the code

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
		void scan()
		{
			cout<<"\nEnter x and y : ";
			cin>>x>>y;
		}
		void add(Num N1, Num N2)
		{
			x = N1.x + N2.x;
			y = N1.y + N2.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1,T2,T3;
	T1.scan();
	T2.scan();
	T3.add(T1,T2);
	T3.show();
	return 0;
}
