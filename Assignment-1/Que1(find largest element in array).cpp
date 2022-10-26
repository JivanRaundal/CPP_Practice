// 1. scan 10 integers from user in an array of integers. 
//    find the largest element.(using [])

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<10; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	int max = num[0];
	
	for(int i=1; i<10; i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}

	}
	
	cout<<"\n\nLargest element in array is : "<<max;
	return 0;
	
}
