// Q 8]. Complete the class definition for given main() funtion.

#include<iostream>
using namespace std;

class Power;	//forward declaration
class Base
{
		int b;
		friend istream& operator>>(istream & din, Base & T);
		friend int operator^(Base B,Power P);
};

class Power
{
		int p;
		friend istream& operator>>(istream & din, Power & T);
		friend int operator^(Base B,Power P);	
};

istream& operator>>(istream & din, Base & T)
{
	din>>T.b;
	return din;
}

istream& operator>>(istream & din, Power & T)
{
	din>>T.p;
	return din;
}

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
	cin>>bs;
	cout<<"\nEnter Power : ";
	cin>>pw;
	int ans;
	ans = bs^pw;	//base raised to power 
	cout<<"\nAnswer = "<<ans;
	return 0;
}
