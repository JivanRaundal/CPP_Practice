// Q. Sorting Array
//		BUBBLE SORT

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	cout<<"\nINPUT ARRAY\n";
	for(int i=0; i<10; i++)
	{
		cout<<"\nEnter the value of "<<i+1<<" element : ";
		cin>>num[i];
	}
	
	cout<<"\n\nARRAY BEFORE SORTING : \n";
	for(int i=0; i<10; i++)
	{
		cout<<" "<<num[i];
	}
	
	//Sorting array
	int temp=0;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<(10-i)-1; j++)  //this condition [j<(10-i)-1], here -1 is bcz if j=8; j+1=9; so it will compared 
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	
	cout<<"\n\nARRAY AFTER SORTING : \n";
	for(int i=0; i<10; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
