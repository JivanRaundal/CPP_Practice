// Q.13.E]

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,m;
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=(5-1); j++)
		{
			cout<<" ";
		}
		for(k=1; k<=i; k++)
		{
			cout<<"*";
		}
		for(m=1; m<=(i-1); m++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
