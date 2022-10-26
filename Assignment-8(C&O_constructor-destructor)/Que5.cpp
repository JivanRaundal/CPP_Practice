// Q 5]. Complete the code. Do not change main() function.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		static void scan(Number *p)	 //p is pointer to object
		{
			cout<<"\nEnter x & y : ";
			cin>>p->x>>p->y;
		}
		static void print(Number *p) //p is pointer to object
		{
			cout<<"\nx = "<<p->x<<"\ty = "<<p->y;
		}
};

int main()
{
	Number T1,T2;
	Number::scan(&T1);
	Number::scan(&T2);
	Number::print(&T1);
	Number::print(&T2);
	return 0;
}
