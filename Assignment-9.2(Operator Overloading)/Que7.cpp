// Q 7]. Complete the class definition for given main() funtion.
// Condition - Don't use friend keyword.

#include<iostream>
using namespace std;

class Base
{
	public:
		int b;
};

class Power
{
	public:
		int p;		
};

int operator^(Base B,Power P)
{
	int i,res=1;
	for(i=0; i<P.p; i++)
	{
		res = res * B.b;
	}
	return res;
}

int main()
{
	Power pw;
	Base bs;
	cout<<"\nEnter Base : ";
	cin>>bs.b;
	cout<<"\nEnter Power : ";
	cin>>pw.p;
	int ans;
	ans = bs^pw;	//base raised to power 
	cout<<"\nAnswer = "<<ans;
	return 0;
}
