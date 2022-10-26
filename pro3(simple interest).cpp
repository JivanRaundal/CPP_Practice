//write a cpp code to calculate simple interest.

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int principle_amount, time;
	float rate_of_interest, simple_interest;
	
	cout<<"\nEnter the principle amout: ";
	cin>>principle_amount;
	cout<<"\nEnter the rate of interest: ";
	cin>>rate_of_interest;
	cout<<"\nEnter the time period: ";
	cin>>time;
	
	simple_interest = (principle_amount*rate_of_interest*time)/100.0;
	cout<<"\nSimple interest is: "<<simple_interest;
	return 0;
}
