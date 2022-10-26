// Q.4]

#include<iostream>
using namespace std;

float Area(int);
float Circum(int);

int main()
{
	int r;
	cout<<"\nEnter radius of circle : ";
	cin>>r;
	
	float area = Area(r);
	float circum = Circum(r);
	
	cout<<"\nArea = "<<area<<"\nCircumference = "<<circum;
	return 0;
}

float Area(int r)
{
	return 3.14 * r * r;
}

float Circum(int r)
{
	return 2 * 3.14 * r;
}
