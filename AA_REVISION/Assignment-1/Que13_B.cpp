// Q.13.B]

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=69; i>=65; i--)
	{
		for(j=65; j<=i; j++)
		{
			cout<<(char)j;
		}
		cout<<"\n";
	}
	return 0;
}
