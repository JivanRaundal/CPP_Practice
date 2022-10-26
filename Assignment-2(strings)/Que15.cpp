// Q 15]. Scan two integer arrays from user. Write a function sort to sort them in descending order.
//		  Write a function merge() to merge this 2 arrays in third array so that the resulting array will be
//		  sorted in descending order.

#include<iostream>
using namespace std;

void sort(int *s, int size)
{
	int i,j,temp;
	for(i=0; i<size; i++)
	{
		for(j=0; j<(size-i)-1; j++)
		{
			if(*(s+j) < *(s+(j+1)))		//descending
			{
				temp = *(s+j);			//swapping
				*(s+j) = *(s+(j+1));
				*(s+(j+1)) = temp;
			}
		}
	}
}

/*void merge(int *parr, int *qarr, int n, int N)	//two merge two non-sorted array in third array & sort them
{
	int num[n+N];
	int i;
	for(i=0; i<n; i++)
	{
		num[i] = *(parr+i);
	}
	int j=i;
	for(i=0; i<N; i++)
	{
		num[j] = *(qarr+i);
		j++;
	}
	cout<<"\n\nMerged Array : \n";
	for(i=0; i<n+N; i++)
	{
		cout<<" "<<num[i];
	}
	sort(num, (n+N));
	cout<<"\nFinal Sorted Array : \n";
	for(i=0; i<n+N; i++)
	{
		cout<<" "<<num[i];
	}
}*/

void merge(int *a,int *b,int n,int N)	//to merge two sorted arrays only
{
	int num[n+N];	//third array to merge elements of array1 & array2
	
	int i=0,j=0,k=0;
	//traverse both arrays simultaneously
	while(i<n && j<N)
	{
		//to store arrays in descending order
		//if *(a+i) > *(b+j) then copy element of first array in third array(num[k]).
		if(*(a+i) > *(b+j))
		{
			num[k] = *(a+i);
			k++;
			i++;
		}
		// else copy element of second array in third array.
		else
		{
			num[k] = *(b+j);
			k++;
			j++;
		}
	}
	//to copy remaining elements of first array
	while(i<n)
	{
		num[k] = *(a+i);
		k++;
		i++;
	}
	//to copy remaining elements of second array
	while(j<N)
	{
		num[k] = *(b+i);
		k++;
		j++;
	}
	
	cout<<"\n\nFINAL MERGED ARRAY IN SORTED FORM IS : \n";
	for(i=0; i<(n+N); i++)
	{
		cout<<" "<<num[i];
	}
}

int main()
{
	int n,N;
	int *p, *q;
	cout<<"\nHow many integers you want for the first array? ";
	cin>>n;
	p = new int[n];
	cout<<"\nEnter first array elements\n";
	for(int i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	cout<<"\nFisrt array is : \n";
	for(int i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	cout<<"\n\nHow many integers you want for the second array? ";
	cin>>N;
	q = new int[N];
	cout<<"\nEnter second array elements\n";
	for(int i=0; i<N; i++)
	{
		cin>>*(q+i);
	}
	cout<<"\nSecond array is : \n";
	for(int i=0; i<N; i++)
	{
		cout<<" "<<*(q+i);
	}
	
	sort(p,n);
	sort(q,N);
	cout<<"\n\nFisrt array after sorting in descending order : \n";
	for(int i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	cout<<"\nSecond array after sorting in descending order : \n";
	for(int i=0; i<N; i++)
	{
		cout<<" "<<*(q+i);
	}
	
	merge(p,q,n,N);
	
	delete[] p;
	delete[] q;
	return 0;
}
