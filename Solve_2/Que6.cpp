// Q 6]. For class Num create 2 runtime objects. scan values of x & y. print them.
//       All in main(). Do not add any member function.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
};

int main()
{
	Num *p, *q;	//pointer to object
	//creating runtime objects
	p = new Num();
	q = new Num();
	
	cout<<"\n1st object : ";
	cout<<"\nEnter x & y : ";
	cin>>p->x>>p->y;
	cout<<"\nx = "<<p->x<<"\ty = "<<p->y;
	
	cout<<"\n\n2nd object : ";
	cout<<"\nEnter x & y : ";
	cin>>q->x>>q->y;
	cout<<"\nx = "<<q->x<<"\ty = "<<q->y;
	
	delete p;
	delete q;
	return 0;
}

