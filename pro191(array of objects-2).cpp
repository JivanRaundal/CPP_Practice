//					CLASS & OBJECT
// ARRAY OF OBJECT:-
//example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

//scan & print x & y in main() using array of objects
int main()
{
	Number obj[5];	//array 0f objects
	
	int i;
	//scanning
	cout<<"\nEnter Values\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nEnter x & y : ";
		cin>>obj[i].x>>obj[i].y;
	}
	
	//printing
	cout<<"\n\nDisplaying Values\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nx = "<<obj[i].x<<"\ty = "<<obj[i].y;
	}
	return 0;
}
