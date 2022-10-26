// Q 12]. Scan a number from user. Find addition of all digits of the number. (Do not use recursion)

#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout<<"\nEnter the number : ";
	cin>>n;
	
	while(n!=0)
	{
		sum = sum + n%10;
		n = n/10;
	}
	cout<<"\nAddition of all digits of number is : "<<sum;
	return 0;
}
