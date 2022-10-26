// Q. scan 8 integers from user in array and count how many times 3 is present in array

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int *p = num;
	int count = 0;
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<8; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>*(p+i);
	}
	
	for(int i=0; i<8; i++)
	{
		if(*(p+i)==3)
		{
			count++;
			cout<<"\n3 found at index : "<<i;
		}
	}
	if(count==0)
	{
		cout<<"\nNOT FOUND";
	}
	
	cout<<"\n\nNumber of times 3 occur in array is : "<<count;
	return 0;
}
