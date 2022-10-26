//		SPECIAL CASE
// In this case 4 loops are required.	

#include<iostream>
using namespace std;
	
int main()
{
	int i,j,k,m;
    for(i=1; i<=5; i++)
    {
    	for(k=5; k>i; k--)	// OR for(k=i; k<=4; k++)
    	{
    		cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		for(m=(i-1);  m>=1; m--)
		{
			cout<<m;
		}
		cout<<"\n";
	}
	return 0;
}
