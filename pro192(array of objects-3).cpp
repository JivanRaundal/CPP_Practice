//					CLASS & OBJECT
// ARRAY OF OBJECT:-
//example:-
// Q. previous code using member function.

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		void scan()	//scan() & print() at a time will work for 1 object only.
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number obj[5];	//array of object
	
	int i;
	//scanning
	cout<<"\nScanning values\n";
	for(i=0; i<5; i++)
	{
		obj[i].scan();
	}
	
	//printing
	cout<<"\n\nPrinting values\n";
	for(i=0; i<5; i++)
	{
		obj[i].print();
	}
	return 0;
}
