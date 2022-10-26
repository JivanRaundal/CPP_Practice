// Operator Overloading
// Overloading Binary operator using friend/Independent function :

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
	public:
		Num()
		{
			x = y = 0;
		}
		void scan()
		{
			cout<<"\nEnter x & y :\n";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		friend Num operator+(Num T1,Num T2);
		friend Num operator-(Num T1,Num T2);
		friend Num operator*(Num T1,Num T2);
};

Num operator+(Num T1,Num T2)
{
	Num temp;
	temp.x = T1.x + T2.x;
	temp.y = T1.y + T2.y;
	return temp;
}

Num operator-(Num T1,Num T2)
{
	Num temp;
	temp.x = T1.x - T2.x;
	temp.y = T1.y - T2.y;
	return temp;
}

Num operator*(Num T1,Num T2)
{
	Num temp;
	temp.x = T1.x * T2.x;
	temp.y = T1.y * T2.y;
	return temp;
}

int main()
{
	Num T1,T2,T3,Ans;
	T1.scan();
	T2.scan();
	T3.scan();
	
	cout<<"\nAddition :";
	Ans = T1 + T2 + T3;
	Ans.show();
	
	cout<<"\nT1 + T2 - T3 : ";
	Ans = T1 + T2 - T3;
	Ans.show();
	
	//Note In this case, BODMAS rule is followed
	cout<<"\nT1 + T2 * T3";
	Ans = T1 + T2 * T3;
	Ans.show();
	return 0;
}
