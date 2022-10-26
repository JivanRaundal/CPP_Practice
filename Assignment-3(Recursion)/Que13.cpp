// Q 13]. Scan a number from user. Find addition of all digits of the number recursively.

#include<iostream>
using namespace std;

int add_digit(int n)
{
	if(n==0)
	{
		return 0;	
	}
	else
	{
		int sum = n%10;
		return sum + add_digit(n/10);	
	}	
}

int main()
{
	int num, ans;
	cout<<"\nEnter the number : ";
	cin>>num;
	
	ans = add_digit(num);
	cout<<"\nAddition of all digits of number is : "<<ans;
	return 0;
}
