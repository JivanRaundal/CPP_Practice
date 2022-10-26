#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int * p = num;
	int i,sum=0;
	cout<<"\nEnter elements of array\n";
	for(i=0; i<5; i++)
	{
		cin>>*(p+i);
	}
	for(i=0; i<5; i++)
	{
		sum = sum + *(p+i);
	}
	cout<<"\nAddition = "<<sum;
	return 0;
}
