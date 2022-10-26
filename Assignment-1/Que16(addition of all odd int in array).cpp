// 16. Scan a range from user. print addition of all odd integers in range.

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int sum=0;
	
	cout<<"\n\nINPUT RANGE";
	for(int i=0; i<10; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	for(int i=0; i<10; i++)
	{
		if(num[i]%2!=0)
		{
			sum = sum + num[i];
		}
	}
	
	cout<<"\n\nAddition of all odd integers in range is : "<<sum;
	return 0;
}
