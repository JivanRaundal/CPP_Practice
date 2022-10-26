// Q 3].

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
		void add(Num N2, Num & N3)
		{
			N3.x = x + N2.x;
			N3.y = y + N2.y;
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
	T1.add(T2,T3);
	T3.show();
	return 0;
}
