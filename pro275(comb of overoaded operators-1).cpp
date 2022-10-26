// 				OPERATOR OVERLOADING
// Note - We can also use combination of overloaded operators :-
//        It will follow the 'BODMAS' Rule.
// eg = T1 + T2 * T3;

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
		Num operator+(Num Temp)
		{
			cout<<"\nOverloading + operator";
			Num T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		Num operator*(Num Temp)
		{
			cout<<"\nOverloading * operator";
			Num T;
			T.x = x * Temp.x;
			T.y = y * Temp.y;
			return T;
		}
};

int main()
{
	Num T1,T2,T3,Ans;
	T1.scan();
	T2.scan();
	T3.scan();
	Ans = T1 + T2 * T3;	//according to BODMAS, 1st T2 * T3 & then T1 + img_ans;
	Ans.show();
	return 0;
}
