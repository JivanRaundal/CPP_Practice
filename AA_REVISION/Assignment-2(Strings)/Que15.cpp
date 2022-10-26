// Q.15]

#include<iostream>
using namespace std;

void sort(int * a,int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(*(a+i) > *(a+j))
			{
				int temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
}

void merge(int* a,int* b,int n1,int n2)
{
	int * num = new int[n1+n2];
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(*(a+i) < *(b+j))
		{
			num[k] = *(a+i);
			k++;
			i++;
		}
		else
		{
			num[k] = *(b+j);
			k++;
			j++;
		}
	}
	while(i<n1)
	{
		num[k] = *(a+i);
		i++;
		k++;
	}
	while(j<n2)
	{
		num[k] = *(b+j);
		j++;
		k++;
	}
	
	cout<<"\n\nAfter Merging :\n";
	for(k=0; k<(n1+n2); k++)
	{
		cout<<" "<<num[k];
	}
}

int main()
{
	int arr1[8], arr2[8];
	int i;
	cout<<"\nEnter first array :\n";
	for(i=0; i<8; i++)
	{
		cin>>arr1[i];
	}
	cout<<"\nEnter second array :\n";
	for(i=0; i<8; i++)
	{
		cin>>arr2[i];
	}
	
	sort(arr1, 8);
	sort(arr2, 8);
	
	cout<<"\n\nAfter Sorting\nFirst Array :\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<arr1[i];
	}
	cout<<"\nSecond Array :\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<arr2[i];
	}
	
	merge(arr1, arr2, 8, 8);
	
	return 0;
}
