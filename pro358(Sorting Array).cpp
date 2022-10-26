// Q. sorting array.

#include<iostream>
using namespace std;

void Sort(int array[],int n)	//note = array can also be caught using this syntax. No need of pointer here
{
	int i,j;
	int temp;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(array[i] > array[j])
			{
				temp     = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	int i,n=7;
	int num[7] = {43,6,21,38,40,67,55};
	
	cout<<"\n\nBefore Sorting num array :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<num[i];
	}
	
	Sort(num,n);
	
	cout<<"\n\nAfter Sorting num array :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
