/* 1]	Outer loop - row
		Inner loop - column

		12345
		12345
		12345
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=5; j++)
		{
			cout<<j;
		}
		cout<<"\n";	
	}
	return 0;	
}		

