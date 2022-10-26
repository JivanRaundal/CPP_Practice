// Q 2]. Complete the class definition for given main() funtion.

#include<iostream>
using namespace std;

class Digit
{
		int x,y;
	public:
		Digit operator-()
		{
			Digit T;
			T.x = -x;
			T.y = -y;
			return T;
		}
		Digit operator-(Digit Temp)
		{
			Digit T;
			T.x = x - Temp.x;
			T.y = y - Temp.y;
			return T;
		}
		Digit operator+(Digit Temp)
		{
			Digit T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		Digit operator*(Digit Temp)
		{
			Digit T;
			T.x = x * Temp.x;
			T.y = y * Temp.y;
			return T;
		}
		
		friend istream& operator>>(istream & din, Digit & T);
		friend ostream& operator<<(ostream & dout, Digit T);
};

istream& operator>>(istream & din, Digit & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream & dout, Digit T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	return dout;
}

int main()
{
	Digit D1,D2,D3,D4;
	cin>>D1>>D2>>D3;
	D4 = D1 + D2 - D3;
	cout<<D4;
	D4 =  -D1 + D2 * D3;
	cout<<D4;
	return 0;
}
