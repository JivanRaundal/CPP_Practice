// 3. scan length and width of rectangle. Define functions to find area and perimeter of rectangle.
//    print both results in main().(use call by value)

#include<iostream>
using namespace std;

float rect_area(int l, int w)
{
	return l*w;
}

float rect_peri(int l, int w)
{
	return 2*(l+w);
}

int main()
{
	int length, width;
	float area, perimeter;
	
	cout<<"\nEnter length and width of rectangle : ";
	cin>>length>>width;
	
	area = rect_area(length, width);
	perimeter = rect_peri(length, width);
	
	cout<<"\n\nArea of rectangle is : "<<area;
	cout<<"\nPerimeter of rectangle is : "<<perimeter;
	return 0;
}
