// Revision Question - pass by refernce

#include<iostream>
using namespace std;

void Rectangle(int l,int b,float & a,float & p)
{
	a = l * b;
	p = 2 * (l + b);
}

int main()
{
	int length,breadth;
	float area,perimeter;
	cout<<"\nEnter length & breadth of rectangle : ";
	cin>>length>>breadth;
	
	Rectangle(length,breadth,area,perimeter);
	
	cout<<"\nArea of rectangle = "<<area;
	cout<<"\nPerimeter of rectangle = "<<perimeter;
	return 0;
}
