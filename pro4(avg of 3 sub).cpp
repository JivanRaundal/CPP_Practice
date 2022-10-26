// Take three subjects marks as input and calculate their average.

#include<iostream>
using namespace std;

int main()
{
	int phy,chem,maths;
	float avg;
	
	cout<<"\nEnter marks of physics: ";
	cin>>phy;
	cout<<"\nEnter marks of chemistry: ";
	cin>>chem;
	cout<<"\nEnter marks of maths: ";
	cin>>maths;
	
	avg = (phy+chem+maths)/3.0;
	cout<<"\n\nAverage of three subjects is: "<<avg;
	return 0;
}
