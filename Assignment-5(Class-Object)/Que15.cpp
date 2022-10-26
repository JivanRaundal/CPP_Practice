// Q 15]. Declare and initialize array of 8 integers. Scan a number from user. Check if that number is present 
//        in the array or not recursively.

#include<iostream>
using namespace std;

void search(int *p,int x,int i)
{
	if(i==8)
	{
		cout<<"\nnot found";
		return;
	}
	else if(*(p+i)==x)
	{
		cout<<"\nfound";
		return;
	}
	else
	{
		search(p,x,i+1);
	}
}

int main()
{
	int num[8];
	cout<<"\nInput array :\n";
	int i;
	for(i=0; i<8; i++)
	{
		cout<<"\nElement "<<i<<" : ";
		cin>>num[i];
	}
	
	int number;
	cout<<"\nEnter the number you want to search in array : ";
	cin>>number;
	
	search(num,number,0);
	return 0;
}
