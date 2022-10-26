// Q 6]. Complete the code for following main() function. Add T1,T2 into T3. Class Digit contains x & y.

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
		
		Digit add(Digit N)	//by value
		{
			Digit temp;
			temp.x = x + N.x;
			temp.y = y + N.y;
			return temp;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

Digit scandata()
{
	Digit T;
	cout<<"\nEnter x & y : ";
	cin>>T.x>>T.y;
	return T;
}

void scandata(Digit & D)	//by refernce
{
	cout<<"\nEnter x & y : ";
	cin>>D.x>>D.y;
}

int main()
{
	Digit T1,T2,T3;
	T1 = scandata();
	scandata(T2);
	T3 = T1.add(T2);
	T3.show();
	return 0;
}
