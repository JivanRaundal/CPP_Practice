// Q 5]. Complete the code for following function.

#include<iostream>
using namespace std;

class Number
{
		int x,y;
	public:
		Number()	//default constructor
		{
			x = 0;
			y = 0;
		}
		Number(int a,int b)	//parameterized constructor
		{
			x = a;
			y = b;
		}
		Number(Number & T)	//copy constructor
		{
			x = T.x;
			y = T.y;
		}
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
		Number operator-(Number Temp)
		{
			Number T;
			T.x = x - Temp.x;
			T.y = y - Temp.y;
			return T;
		}
		Number operator~()
		{
			Number T;
			T.x = ~x;
			T.y = ~y;
			return T;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number T1(3,6), T2(T1), T3(2,9), T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3;	//bitwise complement
	T4.show();	//will print ~T3.x and ~T3.y
	return 0;
}
