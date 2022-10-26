// Revision - Class & object
// Q. Complete the following code for given main() function.
//    calculate base(of class base) raise to power(of class power) into the Independent function calc().

#include<iostream>
using namespace std;

class Power
{
	public:
		int p;
		void scan()
		{
			cout<<"\nEnter the power term : ";
			cin>>p;
		}
};
class Base
{
	public:
		int b;
		void scan()
		{
			cout<<"\nEnter the base term : ";
			cin>>b;
		}
};

void calc(Power pw,Base bs)	//Independent function
{
	int i,ans = 1;
	for(i=1; i<=pw.p; i++)
	{
		ans = ans * bs.b;
	}
	cout<<"\n"<<bs.b<<" raised to "<<pw.p<<" is : "<<ans;
}

int main()
{
	Power P;
	Base B;
	P.scan();
	B.scan();
	calc(P,B);
	return 0;
}
