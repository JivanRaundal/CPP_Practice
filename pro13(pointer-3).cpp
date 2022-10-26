//	we  can use scanf() to scan value & cout to display value in same code, i.e. the combination of C & CPP.
// In below code we came to know that scanf() takes adress of variable as input, eg- scanf("%d%d",&a,&b);
// while cin takes actual variable as input, eg- cin>>a>>b;
// Therefore to scan pointers we only use name of pointer(P) in scanf() bcz it stores the adress only i.e. p=&a;

#include<stdio.h>	//for C
#include<iostream>	//for CPP
using namespace std;

int main()
{
	int a,b;
	cout<<"\n\t\t\tscanf() with normal variable";
	cout<<"\nEnter value of a & b: ";		// scanf() with variables store adress of var
	scanf("%d%d", &a,&b);
	cout<<"\n a = "<<a<<"\t"<<" b = "<<b;
		
	int *p,*q;
	p=&a;
	q=&b;
	
	cout<<"\n\n\t\t\tscanf() with pointer variable";
	cout<<"\nEnter value of a & b: ";
	scanf("%d%d", p,q);						// scanf() with pointers stores only pointer name bcz it is adress 
	
	cout<<"\n a = "<<a<<"\t"<<" b = "<<b;
	return 0;
}
