// Q.6]

#include<iostream>
using namespace std;

int main()
{
	char arr[7];
	cout<<"\nEnter characters \n";
	int i;
	for(i=0; i<7; i++)
	{
		cin>>arr[i];
	}
	int count=0;
	for(i=0; i<7; i++)
	{
		if(arr[i] == 'A')		//OR if((int)arr[i] == 65)
		{
			count++;	
		}	
	}
	cout<<"\nCount = "<<count;
	return 0;
}
