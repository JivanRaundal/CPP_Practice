// 15. Scan a number from user check if it is prime or not.

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\nEnter the number : ";
	cin>>num;
	
	if(num==0 || num==1)
	{
		cout<<"\n1 & 0 are neither prime nor composite\n";
		return 0;
	}
	
	int flag=0;
	for(int i=2; i<num; i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n"<<num<<" is prime number";
	}
	else
	{
		cout<<"\n"<<num<<" is not prime number";
	}
	return 0;
}
