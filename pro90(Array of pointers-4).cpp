// 							ARRAY OF POINTERS
//example-4]. Scan and print addition of all elements of array using array of pointers.

#include<iostream>
using namespace std;

int main()
{
	int arr[5];		//normal array of int
	int *ptr[5];	//array of pointers
	
	int i, sum=0;
	//assigning addresses
	for(i=0; i<5; i++)
	{
		ptr[i] = &arr[i];
	}
	
	cout<<"\nEnter values :\n";
	for(i=0; i<5; i++)
	{
		cin>>*ptr[i];
	}
	
	//sum of all elements
	for(i=0; i<5; i++)
	{
		sum = sum + *ptr[i];
	}
	cout<<"\n\nAddition of all elements is : "<<sum;
	return 0;
}
