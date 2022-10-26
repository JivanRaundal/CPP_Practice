// Q. Declare and initialize array of 8 integers. Print all elements of array in Reverse.

#include<iostream>
using namespace std;

void print(int *p, int i)
{
	if(i==8)
	{
		return;
	}
	else
	{
		print(p,i+1);
		cout<<" "<<*(p+i);
	}
}

int main()
{
	int arr[8] = {10,20,30,40,50,60,70,80};
	print(arr,0);
	return 0;	
} 
