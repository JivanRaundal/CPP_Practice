// 11. scan length and width of rectangle in main(). Define only one function rectangle() to find area and
//     perimeter. print both results in main(). (use pass by reference)

#include<iostream>
using namespace std;

void rectangle(int l, int w, float & _area, float & _peri)	// _area & _peri are reference var of area & primeter.
{
	_area = l*w;
	_peri = 2*(l+w);
}

int main()
{
	int length,width;
	float area,peri;
	
	cout<<"\nEnter the length and width of recatangle : ";
	cin>>length>>width;
	
	rectangle(length, width, area, peri);
	
	cout<<"\n\nArea of rectangle is : "<<area;
	cout<<"\nPerimeter of rectangle is : "<<peri;
	return 0;
}
