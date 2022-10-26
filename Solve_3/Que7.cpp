// Q 7].

#include<iostream>
using namespace std;

class Power;
class Base
{
		int b;
	public:
		void scan()
		{
			cout<<"\nEnter Base term : ";
			cin>>b;
		}
		void calc(Power P);
};
class Power
{
		int p;
	public:
		void scan()
		{
			cout<<"\nEnter Power term : ";
			cin>>p;
		}
		friend void Base::calc(Power P);
};
void Base::calc(Power P)
{
	int i, ans = 1;
	for(i=1; i<=P.p; i++)
	{
		ans = ans * b;
	}
	cout<<"\nAnswer = "<<ans;
}
int main()
{
	Power objp;
	Base objb;
	objp.scan();
	objb.scan();
	objb.calc(objp);
	return 0;
}
