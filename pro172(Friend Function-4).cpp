//						CLASS & OBJECT
// FRIEND FUNCTION:-
// Note - Can main() function be friend function of a class ....??? --> YES
// Example:-
// Note - We usually pass object as a parameter to friend function.

#include<iostream>
using namespace std;

class Base;
class Power
{
		int p;
	public:
		void scan()
		{
			cout<<"\nEnter power term : ";
			cin>>p;	
		}
		friend int main();	
};
class Base
{
		int b;
	public:
		void scan()
		{
			cout<<"\nEnter base term : ";
			cin>>b;
		}	
		friend int main();
};

void calc(int pow,int base)	//Independent function
{
	int i,ans=1;
	for(i=1; i<=pow; i++)
	{
		ans = ans * base;	
	}
	cout<<"\nAnswer = "<<ans;
}

int main()	//Independent fun & friend fun for the class Power & Base
{
	Power objp;
	Base  objb;
	objp.scan();
	objb.scan();
	calc(objp.p, objb.b);	//main() is friend so we can access private members of both the classess.
	return 0;
}
