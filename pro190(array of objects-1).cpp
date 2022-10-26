//					CLASS & OBJECT
// ARRAY OF OBJECT:-
//example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Number obj[5];	//array of 5 objects
	
	obj[0].x = 10;
	obj[0].y = 20;
	obj[2].x = 11;
	obj[2].y = 22;
	
	obj[0].print();
	obj[2].print();
	return 0; 
}
