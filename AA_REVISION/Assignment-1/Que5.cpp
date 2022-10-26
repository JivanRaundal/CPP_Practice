// Q.5]

#include<iostream>
using namespace std;

float simpleInterest(int p,float r,float t)
{
	return (p * r * t) / 100;
}

int main()
{
	int p,r,t;
	cout<<"\nEnter Principle amount : ";
	cin>>p;
	cout<<"\nEnter rate of interest : ";
	cin>>r;
	cout<<"\nEnter time period : ";
	cin>>t;
	
	float si = simpleInterest(p,r,t);
	cout<<"\nSimple Interest = "<<si;
	return 0;
}
