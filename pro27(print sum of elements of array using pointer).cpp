// Q. scan array using pointer p, & print sum of all elements of array using extra pointer p.

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int *p = num;
	int sum = 0;
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter value of num["<<i<<"] : ";
		cin>>*(p+i);
	}
	
	for(int i=0; i<5; i++)
	{
		sum = sum + *(p+i);
	}
	
	cout<<"\n\nSUM OF ELEMENTS OF ARRAY IS : "<<sum;
	return 0;
}
