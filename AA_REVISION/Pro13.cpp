// Overloading insertion(<<) & extraction(>>) operators :

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		
		friend istream& operator>>(istream & din,Num & T);
		friend ostream& operator<<(ostream & dout,Num T);
};

istream& operator>>(istream & din,Num & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream & dout,Num T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	return dout;
}

int main()
{
	Num T1,T2,T3;
	cin>>T1>>T2>>T3;
	cout<<T1<<T2<<T3;
	return 0;
}
