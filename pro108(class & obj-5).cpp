//						CLASS AND OBJECT
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int a,b,c;
		void change()
		{
			a = a+1;
			b = b+1;
			c = 0;
		}
		void show()
		{
			cout<<"\na = "<<a<<"\tb = "<<b<<"\tc = "<<c;
		}
};

int main()
{
	Number T1, T2;
	T1.a = 10;
	T1.b = 11;
	T1.c = 12;
	
	T2.a = 20;
	T2.b = 21;
	T2.c = 22;
	
	T1.show();	// 10 11 12
	T2.show();	// 20 21 22
	
	T1.change();
	T2.change();
	
	T1.show();	// 11 12 0
	T2.show();	// 21 22 0
	return 0;
}
