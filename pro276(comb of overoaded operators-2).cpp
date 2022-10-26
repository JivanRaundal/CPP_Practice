//				OPERATOR OVERLOADING
// TRY & ERROR EXAMPLES -
// eg - Ans = T1 + -T2;	

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		Num operator-()		//overloading unary minus(-) operator
		{
			Num T;
			T.x = -x;
			T.y = -y;
			return T;
		}
		Num operator+(Num Temp)	//overloading binary plus(+) operator
		{
			Num T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
};

int main()
{
	Num T1,T2,Ans;
	T1.scan();	//input = 5 8
	T2.scan();	//input = 3 4
	//Ans = T1.operator+(T2.operator-());
	Ans = T1 + -T2;
	Ans.show();	//output = 2 4
	T2.show();	//3 4
	return 0;	
}
