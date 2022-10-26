// Q. write a scan() and print() function to scan & print array created at runtime.

#include<iostream>
using namespace std;

int n;	//n is size and it is global variable so that each function can access it.

int* scan()
{
	//int n;
	cout<<"\nHow many integers you want? ";
	cin>>n;
	
	int *p;
	p = new int[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"\nEnter the value of element "<<i<<" : ";
		cin>>*(p+i);
	}
	return p;
}

void print(int *p)
{
	cout<<"\n\nYour array is :\n{";
	for(int i=0; i<n; i++)
	{
		cout<<" "<<*(p+i)<<",";
	}
	cout<<" }";
}

int main()
{
	int *ptr;
	ptr = scan();
	print(ptr);
	
	delete[] ptr;
	return 0;
}
