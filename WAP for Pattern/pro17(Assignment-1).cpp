// 17] ALL THE ASSIGNMENT - 1 QUESTIONS ON PATTERNS.

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	/* 1]
			1
			21
			321
			4321
			54321
	*/
	cout<<"\n\n1]\n\n";
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
	/* 2]
			ABCDE
			ABCD
			ABC
			AB
			A
	*/
	cout<<"\n\n2]\n\n";
	for(i=69; i>=65; i--)
	{
		for(j=65; j<=i; j++)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
	
	/* 3]
			E
			DE
			CDE
			BCDE
			ABCDE
	*/
	cout<<"\n\n3]\n\n";
	for(i=69; i>=65; i--)
	{
		for(j=i; j<=69; j++)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
	
	/* 4]
			----E
			---DE
			--CDE
			-BCDE
			ABCDE
	*/
	cout<<"\n\n4]\n\n";
	for(i=69; i>=65; i--)
	{
		for(k=65; k<i; k++)
		{
			cout<<"-";	
		}	
		for(j=i; j<=69; j++)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
	
	/* 5]
			    *
			   **
			  ***
			 ****
			*****
	*/
	cout<<"\n\n5]\n\n";
	for(i=1; i<=5; i++)
	{
		for(k=5; k>i; k--)
		{
			cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	
	/* 6]	SPECIAL CASE USE 4 LOOPS
			    1
			   121
			  12321
			 1234321
			123454321
	*/
	cout<<"\n\n6] PYRAMID\n\n";
	int m; 	//for extra loop
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
	

