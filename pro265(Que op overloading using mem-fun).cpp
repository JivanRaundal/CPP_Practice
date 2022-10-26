// 			OPERATOR OVERLOADING
// Note - There are four tyes of operator overloading :-
// A) Using Member function - 1) Unary, 2) Binary
// B) Using Friend Function - 1) Unary, 2) Binary

// Overloading Binary Operator Using Member function :-
// Note - While overloading binary operator, left hand side operand will be the calling object & right hand side operand will go
//        as a parameter.
// eg - overloading binary +,-,*,/ operator using member function :-

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
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		Num operator+ (Num Temp)
		{
			Num T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		Num operator- (Num Temp)
		{
			Num T;
			T.x = x - Temp.x;
			T.y = y - Temp.y;
			return T;
		}
		Num operator* (Num Temp)
		{
			Num T;
			T.x = x * Temp.x;
			T.y = y * Temp.y;
			return T;
		}
		Num operator/ (Num Temp)
		{
			Num T;
			if(Temp.x == 0 || Temp.y == 0)	//i.e if denominator is zero
			{
				cout<<"\nCan't divide!...denominator is zero";
				T.x = 0;
				T.y = 0;
				return T;	//answer will be 0 0
			}
			else
			{
				T.x = x / Temp.x;
				T.y = y / Temp.y;
				return T;
			}
		}
};

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	T2.scan();
	
	int ch;
	do
	{
		cout<<"\n\n_________MENUE_________";
		cout<<"\n1. Addition.";
		cout<<"\n2. Substraction.";
		cout<<"\n3. Multiplication.";
		cout<<"\n4. Division.";
		cout<<"\n5. exit.";
		cout<<"\n______________________";
		cout<<"\nEnter Your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				Ans = T1 + T2;
				cout<<"\nAddition : ";
				Ans.print();
				break;
				
			case 2:
				Ans = T1 - T2;
				cout<<"\nSubstraction : ";
				Ans.print();
				break;
				
			case 3:
				Ans = T1 * T2;
				cout<<"\nMultiplication : ";
				Ans.print();
				break;
				
			case 4:
				Ans = T1 / T2;
				cout<<"\nDivision : ";
				Ans.print();
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!...Plz try again";
		}
	}while(ch != 5);
	
	return 0;
}
