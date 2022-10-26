//						ARRAY OF POINTERS
//example-1

#include<iostream>
using namespace std;

int main()
{
	int a=10, b=20 ,c=30;
	int *ptr[3];	//array of pointers
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	
	for(int i=0; i<3; i++)
	{
		cout<<" "<<*ptr[i];
	}
	return 0;
}
