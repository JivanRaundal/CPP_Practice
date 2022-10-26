// Q 1]. Complete the class definition for given main() funtion.

#include<iostream>
using namespace std;

class Number
{
		int x,y;
	public:
		Number operator++()
		{
			Number T;
			T.x = x + 1;
			++x;
			T.y = y + 1;
			++y;
			return T;
		}
		Number operator+(Number Temp)
		{
			Number T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		
		friend istream& operator>>(istream & din, Number & T);
		friend ostream& operator<<(ostream & dout, Number T);
};

istream& operator>>(istream & din, Number & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream & dout, Number T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	return dout;
}

int main()
{
	Number T1,T2,T3;
	cin>>T1>>T2;
	T3 = ++T1;
	cout<<T3;
	T3 = T1 + T2;
	cout<<T3;
	return 0;
}
