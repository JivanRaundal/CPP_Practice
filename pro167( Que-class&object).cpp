// Revision - Class & object
// Q. Complete the following code for given main() function.
//    calculate base(of class base) raise to power(of class power) into the member function of class base.
//    Also scan the power term in member fun of class Base only. i.e. class power dosn't have any member function.

#include<iostream>
using namespace std;

class Power
{
	public:
		int p;
};
class Base
{
	public:
		int b;
		void scan(Power & pw)	//P of Power is passed by reference
		{
			cout<<"\nEnter base and power : ";
			cin>>b>>pw.p;
		}
		void calc(Power pw)	//P of Power is passed by value
		{
			int i,ans=1;
			for(i=1; i<=pw.p; i++)
			{
				ans = ans * b;
			}
			cout<<"\n"<<b<<" raised to "<<pw.p<<" is : "<<ans;
		}
};

int main()
{
	Power P;
	Base B;
	B.scan(P);
	B.calc(P);
	return 0;
}
