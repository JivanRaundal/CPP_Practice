// 5. scan necessary details in main() to find simple interest. Define function interest() to find simple interest.
//    (use call by value)

#include<iostream>
using namespace std;

float interest(int p, float r, int t)
{
	return (p*r*t)/100;
}

int main()
{
	int prin_amount, time;
	float rate, simple_interest;
	
	cout<<"\nEnter the principle amount : ";
	cin>>prin_amount;
	cout<<"\nEnter rate of interest : ";
	cin>>rate;
	cout<<"\nEnter time period : ";
	cin>>time;
	
	simple_interest = interest(prin_amount, rate, time);
	cout<<"\n\nSimple Interest : "<<simple_interest;
	return 0;
}
