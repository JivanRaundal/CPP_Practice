// Q 10]. Scan a number from user. Check if it is prime or not. (Do not use recursion)

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\nEnter the number : ";
	cin>>num;
	
	// as 0 & 1 are neither prime nor composite
	if(num<2)
	{
		cout<<"\nInvalid number...";
		return 0;
	}
	
	int i, flag=0;
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n"<<num<<" is prime number.";
	}
	else
	{
		cout<<"\n"<<num<<" is not prime number.";
	}
	return 0;
	
}
