//							new Operator
// Q. scan and store n integers from user. print them and also print addition of all integers.

#include<iostream>
using namespace std;

int main()
{
	int n;
	int *p;
	
	cout<<"\nHow many integers you want? ";
	cin>>n;
	
	//int num[n]; 		//NOTE:- plz don't use this, as it's time consuming and bad programming practice.
						// it internally works as new only but it becomes time consuming so use direct new.
								 
	p = new int[n];		//creates n integers array at runtime.
	
	// TO scan the values;
	cout<<"\n\nEnter the values :\n";
	int i;
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	
	// To print all integers
	cout<<"\n\nYour integers are :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	//To print addition of all integers
	int sum=0;
	for(i=0; i<n; i++)
	{
		sum += *(p+i);
	}
	cout<<"\n\nAddition of all integers is : "<<sum;
	
	delete[] p;	//to free the runtime memory allocated on Heap.
	return 0;
}
