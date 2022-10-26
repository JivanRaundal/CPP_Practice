#include<iostream>
using namespace std;

template<class T>
void sort(T arr[],int n)
{
	int i,j;
	T temp;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int num[] = {5,4,3,2,1};
	sort(num, 5);
	cout<<"\nAfter Sorting :\n";
	for(int i=0; i<5; i++)
	{
		cout<<" "<<num[i];
	}
	
	float numf[] = {5.2,4.4,3.2,2.3,1.1};
	sort(numf, 5);
	cout<<"\nAfter Sorting :\n";
	for(int i=0; i<5; i++)
	{
		cout<<" "<<numf[i];
	}
	return 0;
}
