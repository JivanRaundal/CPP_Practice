// 							PASSING ARRAY TO FUNCTION BY ADDRESS
// Q. scan array of 10 integers from input_array() & define a function called count() to count total number of even
//    elements in array.

#include<iostream>
using namespace std;

void input_array(int *q)
{
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<10; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>*(q+i);
	}
}

int count(int *p)
{
	int _count=0;
	for(int i=0; i<10; i++)
	{
		if(*(p+i)%2==0)
		{
			_count++;
		}
	}
	return _count;
}

int main()
{
	int num[10];
	int ans;
	
	input_array(num);	// name of array stores it's base address.	input_array()--> to input array elements
	
	ans = count(num);	// function to count even numbers in array
	
	if(ans!=0)
	{
		cout<<"\n\nTotal even numbers in array are : "<<ans;
	}
	else
	{
		cout<<"\nNo even number is present in array";
	}
	return 0;
}
