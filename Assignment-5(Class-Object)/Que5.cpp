// Q 5]. Complete the code for following main() function. Add T1,T2 into T3.
//       Class Digit contains x & y.
//       (main() fun is as in que)

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
		
		void add(Digit N1,Digit N2)	//T1 & T2 are passed by value
		{
			x = N1.x + N2.x;
			y = N1.y + N2.y;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

void scandata(Digit & D)
{
	cout<<"\nEnter x & y : ";
	cin>>D.x>>D.y;
}

int main()
{
	Digit T1,T2,T3;
	scandata(T1);
	scandata(T2);
	T3.add(T1,T2);	
	T3.show();
	return 0;
}
