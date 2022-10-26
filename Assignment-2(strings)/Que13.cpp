// Q 13]. Scan an array of 8 integers from user. Write a function sort() to sort given array in ascending order.

#include<iostream>
using namespace std;

void sort(int *p)
{
	int i,j,temp;
	for(i=0; i<8; i++)
	{
		for(j=0; j<(8-i)-1; j++)
		{
			if(*(p+j)>*(p+(j+1)))
			{
				temp = *(p+j);			//swapping
				*(p+j) = *(p+(j+1));
				*(p+(j+1)) = temp;
			}
		}
	}
}

int main()
{
	int num[8];
	cout<<"\nINPUT ARRAY";
	int i;
	for(i=0; i<8; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	cout<<"\n\nARRAY BEFORE SORTING\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	
	sort(&num[0]);	//fun to sort array in ascending order
	
	cout<<"\n\nARRAY AFTER SORTING\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
