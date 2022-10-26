// Q 16]. Scan 8 integers from user and store them using array of pointers.
//		  Use runtime memory to store integers. Sort this array by 2 methods given below.
//		  1) By shuffling elements of array.
//		  2) By shuffling addresses only, not the actual elements. (try to define a funtion to sort array if possible)


#include<iostream>
using namespace std;

int main()
{
	int *p[8];	//array of pointers
	
	for(int i=0; i<8; i++)
	{
		p[i] = new int();
	}
	
	cout<<"\nINPUT ARRAY :";
	for(int i=0; i<8; i++)
	{
		cout<<"\nEnter value of element "<<i+1<<" : ";
		cin>>*p[i];
	}
	
	cout<<"\nPRINTING ARRAY :\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<*p[i];
	}
	
	//sorting array elements
	int temp1;
	for(int i=0; i<8; i++)
	{
		for(int j=i+1; j<8; j++)
		{
			if(*p[i] > *p[j])
			{
				temp1 = *p[i];
				*p[i] = *p[j];
				*p[j] = temp1;
			}
		}
	}
	cout<<"\n\nArray after sorting by elements : \n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<*p[i];
	}
	
	//sorting address of elements
	int *temp2;
	for(int i=0; i<8; i++)
	{
		for(int j=i+1; j<8; j++)
		{
			if(*p[i] > *p[j])	//while comparing values are compared not addresses
			{
				//while swaping addresses are swapped
				temp2 = p[i];
				p[i] = p[j];
				p[j] = temp2;
			}
		}
	}
	cout<<"\n\nArray after sorting address :\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<*p[i];
	}
	
	return 0;
}

