// OVERLOADING INSERTION (<<) & EXTRACTION (>>) OPERATORS      
// Q. Overload << & >> operator for scanning & printing x & y for given 4 objects.

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
	Num T1,T2,T3,T4;
	//scanning
	cin>>T1>>T2>>T3>>T4;
	//printing
	cout<<T1<<T2<<T3<<T4;
	return 0;
}
