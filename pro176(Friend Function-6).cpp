// 						CLASS & OBJECT
// FRIEND FUNCTION:-
// Making Member Function of One Class as a Friend of Another Class:-

// LOGICAL RULE(Hindi):- jis class ke function friend banane hai, usko pehle define karo & jisme as a friend declare
//                       karne hai, uss class ko baad me define karo & uska forward declaration karo.
// Note - Member Functions should be declared outside the definitions of all classes.

#include<iostream>
using namespace std;

class Power;	//forward declaration

class Base
{
	private:
		int b;
	public:
		void scan(Power & );	//it's ok if we not mention parameter name during function declaration
		void calc(Power );	   //bcz it is required during function definition only
};

class Power
{
	private:
		int p;
		friend void Base::scan(Power &);
		friend void Base::calc(Power);
};

void Base::scan(Power & T)	//here parameter name is necessary
{
	cout<<"\nEnter Base term : ";
	cin>>b;
	cout<<"\nEnter power term : ";
	cin>>T.p;
}

void Base::calc(Power T)
{
	int i,ans = 1;
	for(i=1; i<=T.p; i++)
	{
		ans = ans * b;
	}
	cout<<"\nAnswer = "<<ans;
}

int main()
{
	Power objp;
	Base  objb;
	objb.scan(objp);
	objb.calc(objp);
	return 0;
}
