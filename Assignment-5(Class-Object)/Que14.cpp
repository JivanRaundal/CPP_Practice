// Q 14]. Scan array of 8 integers from user. Print this array recursively.

#include<iostream>
using namespace std;

void print(int *p,int i)
{
	if(i==8)
	{
		return;
	}
	
	cout<<" "<<*(p+i);
	print(p,i+1);
}

int main()
{
	int arr[8];
	cout<<"\nInput array :\n";
	for(int i=0; i<8; i++)
	{
		cout<<"\nElement "<<i<<" : ";
		cin>>arr[i];
	}	
	
	cout<<"\n\nPrinting array recursively :\n";
	print(arr,0);
	return 0;
} 
