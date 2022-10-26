// Assignment-1

#include<iostream>
using namespace std;

/*Q.1)
int main()
{
	int num[5];
	int i;
	cout<<"\nEnter elements of array : ";
	for(i=0; i<5; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>num[i];
	}
	
	//largest
	int largest = num[0];
	for(i=0; i<5; i++)
	{
		if(largest < num[i])
		{
			largest = num[i];
		}
	}
	cout<<"\nLargest = "<<largest;
	
	//smallest
	int smallest = num[0];
	for(i=0; i<5; i++)
	{
		if(smallest > num[i])
		{
			smallest = num[i];
		}
	}
	cout<<"\nSmallest = "<<smallest;
	return 0;
}
*/

/*Q.6)
int main()
{
	char arr[7];
	int i;
	cout<<"\nEnter characters in array : ";
	for(i=0; i<7; i++)
	{
		cout<<"\nEnter character "<<i<<" : ";
		cin>>arr[i];
	}
	
	int count=0;
	for(i=0; i<7; i++)
	{
		if(arr[i] == 'A')
		{
			count++;
		}
	}
	cout<<"\n'A' is present "<<count<<" times in char array";
	return 0;
}
*/

//Q8) sorting array

int main()
{
	int num[6] = {12,45,7,34,15,4};
	int i,j;

	cout<<"\nArray before sorting :\n";
	for(i=0; i<6; i++)
	{
		cout<<" "<<num[i];
	}
	
	//sorting 
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}	
	}
	
	cout<<"\n\nAfer sorting :\n";
	for(i=0; i<6; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}





