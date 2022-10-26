// 7. scan 6 integers in an array. Define function addition() to find addition of all integers.
//	  print result in main().

#include<iostream>
using namespace std;

int addition(int *p)
{
	int sum = 0;
	for(int i=0; i<6; i++)
	{
		sum = sum + *(p+i);
	}
	return sum;
}

int main()
{
	int num[6];
	int ans;
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<6; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	ans = addition(&num[0]);
	cout<<"\n\nAddition of all integers in an array is : "<<ans;
	return 0;
}
