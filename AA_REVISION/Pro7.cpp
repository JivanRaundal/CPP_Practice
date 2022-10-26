// Operator Overloading
// Overloading Unary operator using member function :

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y :\n";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		//Overloading unary minus (-) operator
		Num operator-()
		{
			Num temp;
			temp.x = -x;
			temp.y = -y;
			return temp;
		}		
};

int main()
{
	Num T1,T2;
	T1.scan();
	cout<<"\nT1 : ";
	T1.show();
	//T2 = T1.operator-();
	T2 = -T1;
	cout<<"\nT2 : ";
	T2.show();
	cout<<"\nT1 : ";
	T1.show();
	return 0;
}
