// Q 17]. Keep Scanning a number from user until user enters -1 recursively. print addition of all numbers user entered.

#include<iostream>
using namespace std;

int scan_add()
{
	int x;
	static int sum=0;
	cout<<"\nEnter the number : ";
	cin>>x;
	cout<<"\nx = "<<x;
	if(x==-1)
	{
		return sum;
	}
	else
	{
		//scan_add();
		sum = sum + x;
		scan_add();
		//sum = sum + x;
	}
}

int main()
{
	int ans;
	ans = scan_add();
	cout<<"\nAddition = "<<ans;
	return 0;
}
