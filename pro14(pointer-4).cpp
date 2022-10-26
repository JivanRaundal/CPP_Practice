// Program to take pointers as input 
// to take pointers as input use * symbol.	eg- cin>>*p>>*q;

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	
	cout<<"\nEnter the value of a & b: ";
	cin>>*p>>*q;							//NOTE:- pointers are taken as input
	cout<<"\n\n a = "<<a<<"\t"<<" b = "<<b;
	return 0;
}
