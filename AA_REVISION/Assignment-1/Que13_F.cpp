// Q.13.F]

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,m;
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=(5-1); j++)
		{
			cout<<"-";
		}
		for(k=1; k<=i; k++)
		{
			cout<<k;
		}
		for(m=(i-1); m>=1; m--)
		{
			cout<<m;
		}
		cout<<"\n";
	}
	return 0;
}
