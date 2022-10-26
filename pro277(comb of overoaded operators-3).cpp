//				OPERATOR OVERLOADING
// TRY & ERROR EXAMPLES -
// eg - Ans = T1 + ++T2;
// Q. overload + operator using friend function.	

#include<iostream>
using namespace std;

class Num
{
		int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		/* Note - if returntype of ++ operator overloaded function is void then it will give error during Ans = T1 + ++T2;
		          BCZ, T2 should return Num type object then only further addition + is possible. Therefore, ++ operator 
				  overloaded function's returntype should be other than void.*/
		Num operator++()
		{
			Num T;
			T.x = x + 1;
			++x;
			T.y = y + 1;
			++y;
			return T;
		}
		friend Num operator+(Num Temp1,Num Temp2);
};

Num operator+(Num Temp1, Num Temp2)
{
	Num T;
	T.x = Temp1.x + Temp2.x;
	T.y = Temp1.y + Temp2.y;
	return T;
}

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	T2.scan();
	//Ans = T1 + T2.operator++();
	Ans = T1 + ++T2;
	Ans.show();
	return 0;
}
