// Scan & print array

#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"\nEnter the size of array : ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\nInput Array : ";
	
	for(int i=0; i<size; i++)
	{
		cout<<"\nEnter the value of arr["<<i<<"] : ";
		cin>>arr[i];
	}
	
	cout<<"\nDisplay array : ";
	
	for(int i=0; i<size; i++)
	{
		cout<<"\nValue of arr["<<i<<"] : "<<arr[i];
	}
	return 0;
}
