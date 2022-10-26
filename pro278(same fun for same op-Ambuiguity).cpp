//				OPERATOR OVERLOADING
// TRY & ERROR EXAMPLES - AMBUIGUITY ERROR
// Note -  If we have same overloaded function for same operators i.e using member function also & using Independent fun also,
//         then compiler gives Ambuiguity Error & to solve it, call overloaded functions explicitly.
//         eg - T1.operator+(); (for using member fun) & operator+(T1,T2); (using friend function) 	

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
		Num operator+(Num Temp)
		{
			cout<<"\nusing member function";
			Num T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		friend Num operator+(Num Temp1,Num Temp2);
};

Num operator+(Num Temp1, Num Temp2)
{
	cout<<"\nusing friend function";
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
	//Ans = T1 + T2;	// AMBUIGUITY ERROR 
	// Solution - call overloaded functions separately
	Ans = T1.operator+(T2);
	Ans.show();
	Ans = operator+(T1,T2);
	Ans.show();
	return 0;
}

