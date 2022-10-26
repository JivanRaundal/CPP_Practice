// New method for sorting array.
// Bubble sort.

#include<iostream>
using namespace std;

int main()
{
	int arr[10] = {5,3,8,2,9,10,23,45,20,1};
	
	int i,j,temp;
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"\n\nArray after sorting :\n";
	for(i=0; i<10; i++)
	{
		cout<<" "<<arr[i];
	}
	return 0;
}
