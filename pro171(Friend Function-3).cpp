//				CLASS & OBJECT
// FRIEND FUNCTION
// Q. Calculate base raised to power.

#include<iostream>
using namespace std;

class Base;	//forward declaration

class Power
{
		int p;
	public:
		void scan()
		{
			cout<<"\nEnter Power term : ";
			cin>>p;
		}
		friend void calc(Power pw,Base bs);
};

class Base
{
		int b;
	public:
		void scan()
		{
			cout<<"\nEnter Base term : ";
			cin>>b;
		}
		friend void calc(Power pw,Base bs);
};

void calc(Power pw,Base bs)
{
	int i,ans=1;
	for(i=1; i<=pw.p; i++)
	{
		ans = ans * bs.b;
	}
	cout<<"\nAnswer = "<<ans;
}

int main()
{
	Power objp;
	Base  objb;
	objp.scan();
	objb.scan();
	calc(objp,objb);
	return 0;
}
