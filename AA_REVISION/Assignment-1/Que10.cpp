// Q.10]

#include<iostream>
using namespace std;

void Circle(int rad,float * a,float * c)
{
	*a = 3.14 * rad * rad;
	*c = 2 * 3.14 * rad;
}

int main()
{
	int rad;
	cout<<"\nEnter radius : ";
	cin>>rad;
	
	float area=0, circum=0;
	Circle(rad, &area, &circum);			//pass by address
	cout<<"\nAread = "<<area<<"\nCircumference = "<<circum;
	return 0;
}
