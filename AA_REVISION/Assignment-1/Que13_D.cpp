// Q.13.D]

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for(i=69; i>=65; i--)
	{
		for(j=i; j>=(65+1); j--)
		{
			cout<<"-";
		}
		
		for(k=i; k<=69; k++)
		{
			cout<<(char)k;
		}
		
		cout<<"\n";
	}
	
	return 0;
}
