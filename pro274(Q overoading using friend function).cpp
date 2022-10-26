// 			OPERATOR OVERLOADING
// Q. overload +,-,*,/ operators using friend function.

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		friend Num operator+(Num, Num);
		friend Num operator-(Num, Num);
		friend Num operator*(Num, Num);
		friend Num operator/(Num, Num);
};

Num operator+(Num Temp1,Num Temp2)
{
	Num T;
	T.x = Temp1.x + Temp2.x;
	T.y = Temp1.y + Temp2.y;
	return T;
}

Num operator-(Num Temp1,Num Temp2)
{
	Num T;
	T.x = Temp1.x - Temp2.x;
	T.y = Temp1.y - Temp2.y;
	return T;
}

Num operator*(Num Temp1,Num Temp2)
{
	Num T;
	T.x = Temp1.x * Temp2.x;
	T.y = Temp1.y * Temp2.y;
	return T;
}

Num operator/(Num Temp1,Num Temp2)
{
	Num T;
	if(Temp2.x==0 || Temp2.y==0)
	{
		cout<<"\nCan't divide!...denominator is zero.";
		T.x = 0;
		T.y = 0;
	}
	else
	{
		T.x = Temp1.x / Temp2.x;
		T.y = Temp1.y / Temp2.y;
		return T;
	}
}

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	T2.scan();
	
	int ch;
	do
	{
		cout<<"\n\n__________MENUE__________";
		cout<<"\n1. Addition.";
		cout<<"\n2. Substraction.";
		cout<<"\n3. Multiplication.";
		cout<<"\n4. Division.";
		cout<<"\n5. exit.";
		cout<<"\n_________________________";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				Ans = T1 + T2;
				cout<<"\nAddition = ";
				Ans.print();
				break;
			
			case 2:
				Ans = T1 - T2;
				cout<<"\nSubstraction = ";
				Ans.print();
				break;
				
			case 3:
				Ans = T1 * T2;
				cout<<"\nMultiplication = ";
				Ans.print();
				break;
				
			case 4:
				Ans = T1 / T2;
				cout<<"\nDivision = ";
				Ans.print();
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"\nInvalid Chice!...plz try again.";
		}
	}while(ch != 5);
	
	return 0;
}
