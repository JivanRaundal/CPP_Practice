// Q 8]. Complete the code for following main() function. Add T1,T2 into T3. Class Digit contains x & y.

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
};


void scan(Digit & D)	//by refernce
{
	cout<<"\nEnter x & y : ";
	cin>>D.x>>D.y;
}

Digit add(Digit N1,Digit N2)	// by value
{
	Digit temp;
	temp.x = N1.x + N2.x;
	temp.y = N1.y + N2.y;
	return temp;
}

void show(Digit T)
{
	cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
}

int main()
{
	Digit T1,T2,T3;
	T1.scan();
	scan(T2);
	T3 = add(T1,T2);
	show(T3);
	return 0;
}

