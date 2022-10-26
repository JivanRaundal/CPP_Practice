// Operator Overloading
// Overloading Binary operator using member function :

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
		void display()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		//overloading binary + operator
		Num operator+(Num T)
		{
			Num temp;
			temp.x = x + T.x;
			temp.y = y + T.y;
			return temp;
		}
};

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	T2.scan();
	cout<<"\nAnswer : ";
	//Ans = T1.operator+(T2);
	Ans = T1 + T2;
	Ans.display();
	return 0;
}
