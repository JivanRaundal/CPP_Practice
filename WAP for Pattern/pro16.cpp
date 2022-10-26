/* 16] In this example 3 loops will be required.
		
		----1
		---12
		--123
		-1234
		12345
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		for(k=5; k>i; k--)
		{
			cout<<"-";
		}
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
