// Q 16]. Scan 8 integers from user and store them using array of pointers.
//		  Use runtime memory to store integers. Sort this array by 2 methods given below.
//		  1) By shuffling elements of array.
//		  2) By shuffling addresses only, not the actual elements. (try to define a funtion to sort array if possible)

#include<iostream>
using namespace std;

/*sort_element(int *a, int n)
{
	int i,j,*temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<(n-i)-1; j++)
		{
			if(*(a+j) > *(a+(j+1)))
			{
				*temp = *(a+j);
				*(a+j) = *(a+(j+1));
				*(a+(j+1)) = *temp;
			}
		}
	}
	
	cout<<"\n\nArray after sorting using elements :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(a+i);
	}
}

void sort_address(int **q, int n)
{
	int i,j,temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<(n-i)-1; j++)
		{
			if(**(q+j) > **(q+(j+1)))
			{
				temp = **(q+j);
				**(q+j) = **(q+(j+1));
				**(q+(j+1)) = temp;
			}
		}
	}
	
	cout<<"\n\nArray after sorting using address :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<**(q+i);
	}
}*/

int main()
{	
	int *num[8];	//array of pointers
	int i, j, n=8;
	
	for(i=0; i<n; i++)
	{
		num[i] = new int(i);	//adress of each element created at runtime is store in array of pointers
	}
	
	cout<<"\nINPUR ARRAY :";
	for(i=0; i<n; i++)
	{
		cout<<"\nEnter value of element "<<i+1<<" : ";
		cin>>*num[i];
	}
	
	cout<<"\n\nDISPLAY ARRAY :\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<*num[i];
	}
	
	//sorting by element
	int temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<(n-i)-1; j++)
		{
			if(**(num+j) > **(num+(j+1)))
			{
				temp = **(num+j);
				**(num+j) = **(num+(j+1));
				**(num+(j+1)) = temp;
			}
		}
	}
	cout<<"\n\nArray after sorting using elements :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(num+i);
	}
	
	return 0;
}
