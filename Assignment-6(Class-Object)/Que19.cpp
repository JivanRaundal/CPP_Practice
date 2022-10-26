// Q 19] Scan n integers from user. sort this array in acsending or descending order by user's choice.

#include<iostream>
using namespace std;

int main()
{
	int n;
	int *p;
	cout<<"\nHow many integer's array you want ? ";
	cin>>n;
	p = new int[n];
	
	//scanning array
	int i,j;
	cout<<"\nInput Array\n";
	for(i=0; i<n; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>*(p+i);
	}
	
	cout<<"\n\nArray Before Sorting :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	//sorting
	int temp;
	int ch;
	cout<<"\n\n------CHOICE------";
	cout<<"\n1. Ascending";
	cout<<"\n2. Descending";
	cout<<"\n-------------------";
	cout<<"\nEnter your choice : ";
	cin>>ch;
	if(ch==1)
	{
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(*(p+i) > *(p+j))
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}
	}
	else
	{
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(*(p+i) < *(p+j))
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}		
	}
	
	cout<<"\nArray After Sorting\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	delete[] p;
	return 0;
}
