// 6. scan 7 characters in an array of char. Count how many times 'A' is present in the array.

#include<iostream>
using namespace std;

int main()
{
	char arr[7];
	int count = 0;
	
	cout<<"\n\nINPUT CHAR ARRAY";
	for(int i=0; i<7; i++)
	{
		cout<<"\nEnter the value of arr["<<i<<"] : ";
		cin>>arr[i];	
	}
	
	for(int i=0; i<7; i++)
	{
		if(arr[i]=='A')
		{
			count++;
		}
	}
	
	cout<<"\n\nNumber of times 'A' is present in array is : "<<count;
	return 0;
} 
