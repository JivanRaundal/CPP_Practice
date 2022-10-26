// 				CLASS & OBJECT
// OBJECT CREATION AT RUNTIME USING new :-
// example:-

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
	Number * p;	//pointer to object
	p = new Number();	//creating object of class Number at runtime.
	
	/*p = new Number[3];	//creates array of three objects.
	  (p+0)->x = 10;
	  (p+1)->y = 20;
	  (p+2)->x = 30;
	  cout<<"\nx = "<<(p+0)->x;
	  cout<<"\ny = "<<(p+1)->y;
	  cout<<"\nx = "<<(p+2)->x;
	*/
	
	p->x = 10;
	p->y = 20;
	p->print();
	
	delete p;
	return 0;
}
