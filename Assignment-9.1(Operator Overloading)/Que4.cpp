// Q 4]. Complete the code for following main() function.

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
		Number operator-()
		{
			Number T;
			T.x = -x;
			T.y = -y;
			return T;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();	//3 7
	T2.show();	//-3 -7
	return 0;
}
