// Q 17]. Declare and initialize an array of 10 integers. Scan a number from user.
//		  Delete all the occurrences of that element from array.

#include<iostream>
using namespace std;

int main()
{
	int num[10] = {1,2,3,3,5,6,3,8,9,10};
	int x,i,j;
	
	cout<<"\nArray :\n{";
	for(i=0; i<10; i++)
	{
		cout<<" "<<num[i]<<",";
	}
	cout<<" }";
	
	int n=9;	//(size-1) i.e (10-1)
	cout<<"\nEnter the number you want to delete : ";
	cin>>x;
	for(i=0; i<=n; i++)
	{
		if(x==num[i])
		{
			for(j=i; j<n; j++)
			{
				num[j] = num[j+1];
			}
			num[j] = 0;	
			n--;	// if element is found then it will be deleted and each time size of array will be reduced by 1
			i--;	//if x is continues in array(eg- 3,3) then due to shifting 2nd x(3) may miss to compare, so i--
		}
	}
	cout<<"\nNumber Deleted Successfully\n{";
	for(i=0; i<=n; i++)
	{
		cout<<" "<<num[i]<<",";
	}
	cout<<" }";
	
	return 0;
}
