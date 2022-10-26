// write a cpp code to scan length & breadth from user and write a seperate functions which returns area & perimeter of 
// rectangle.

#include<iostream>
using namespace std;

float rect_area(int l, int b)
{
	return l*b;
}

float rect_perimeter(int l, int b)
{
	return 2*(l+b);
}

int main()
{
	int length, breadth;
	float area, perimeter;
	cout<<"\nEnter the length & breadth of rectangle: ";
	cin>>length>>breadth;
	
	area=rect_area(length, breadth);
	perimeter=rect_perimeter(length,breadth);
	
	cout<<"\nArea of rectangle : "<<area;
	cout<<"\nPerimater of rectangle : "<<perimeter;
	return 0;
}
