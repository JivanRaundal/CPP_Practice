// Q 6].

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
		friend void calc(Power P, Base B);
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
		friend void calc(Power P, Base B);
};
void calc(Power P, Base B)
{
	int i, ans = 1;
	for(i=1; i<=P.p; i++)
	{
		ans = ans * B.b;
	}
	cout<<"\nAnswer = "<<ans;
}
int main()
{
	Power objp;
	Base objb;
	objp.scan();
	objb.scan();
	calc(objp,objb);
	return 0;
}
