//								PASSING BY ADDRESS
// write a circle function which calculates area and perimeter using pass by address.

#include<iostream>
using namespace std;

void circle(int rad, float *parea, float *pcircum)
{
	*parea = 3.14*rad*rad;
	*pcircum = 2*3.14*rad;
}

int main()
{
	int rad;
	float area,circum;
	cout<<"\nEnter the radius of circle : ";
	cin>>rad;
	
	circle(rad,&area,&circum);
	
	cout<<"\nArea of circle is : "<<area;
	cout<<"\nCircumference of circle is : "<<circum;
	return 0;
}
