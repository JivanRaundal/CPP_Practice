// Q 5] Create 3 objects of class Number and perform addition of 2 objects in third object.
//      add() function is private.

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
		void add(Number N1,Number N2)
		{
			x = N1.x + N2.x;
			y = N1.y + N2.y;	
		}
	
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
		
		void call_add(Number D1,Number D2)
		{
			add(D1,D2);
		}
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T1.print();
	T2.scan();
	T2.print();
	
	T3.call_add(T1,T2);
	T3.print();
	return 0;	
} 
