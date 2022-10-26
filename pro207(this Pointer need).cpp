//					CLASS & OBJECT
// this POINTER:-
// 1] Need of this pointer :- When a member function of class contains local variables having same name as that of 
//    datamembers of it's class, then priority is always given to local variables over datamembers.
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void set(int x,int y)	//here priority is given to local variables and not datamembers
		{						// hence, datamembers are not accessed here & remains uninitialized.
			x = x;
			y = y;
		}
		
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;	//as datamembers remains uninitialized print() prints garbage value of x & y
		}
};

int main()
{
	Number obj;
	obj.set(10,20);
	obj.print();	//garbage garbage
	return 0;
}
