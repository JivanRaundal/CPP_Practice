
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
		int operator&& (Num Temp)
		{
			if(x == Temp.x && y == Temp.y)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1,T2;
	T1.scan();
	T2.scan();
	T1.show();
	T2.show();
	
	int x;
	x = T1 && T2;
	if(x==1)
	{
		cout<<"\nEqual";
	}
	else
	{
		cout<<"\nNot equal";
	}
	return 0;
}
