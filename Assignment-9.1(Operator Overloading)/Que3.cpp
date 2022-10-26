// Q 3]. Complete the code for following main() function.

#include<iostream>
using namespace std;

class Number
{
		int x,y;
	public:
		Number()	//default constructor
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		Number(int a)	//parameterized constructor
		{
			//cout<<"\nIn paramterized";
			x = a;
			y = a;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		Number operator*(Number Temp)
		{
			Number T;
			T.x = x * Temp.x;
			T.y = y * Temp.y;
			return T;
		}
		Number operator^(int a)
		{
			Number T;
			T.x = T.y = 1;
			int i;
			for(i=1; i<=a; i++)
			{
				T.x = T.x * x;
				T.y = T.y * y;
			}
			return T;
		}
};

int main()
{
	Number T1,T2,T3(1);
	T3 = T1 * T2;
	T3.show();
	T3 = T3 ^ 2;	//treat ^ as power operator.
	// It should perform x^2 and y^2;
	T3.show();
	return 0;
}
