// Q 7]. Complete the code for following main() function. Add T1,T2 into T3. Class Digit contains x & y.

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		
		void add(Digit N2,Digit & N3)	//T2 by value & T3 by refernce
		{
			N3.x = x + N2.x;
			N3.y = y + N2.y;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};


void scan(Digit & D)	//by refernce
{
	cout<<"\nEnter x & y : ";
	cin>>D.x>>D.y;
}


int main()
{
	Digit T1,T2,T3;
	T1.scan();
	scan(T2);
	T1.add(T2,T3);
	T3.show();
	return 0;
}
