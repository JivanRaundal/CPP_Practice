// Pattern Printing.

#include<iostream>
using namespace std;

/* 1]

12345
12345
12345

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
*/

/* 2]

12345
1234
123
12
1

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 3]

54321
4321
321
21
1

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 4]

54321
5432
543
54
5

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 5]

5
54
543
5432
54321

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=i; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 6]

12345
1234
123
12
1

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 7]

1
21
321
4321
54321

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 8]

1
12
123
1234
12345

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 9]

1
22
333
4444
55555

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 10]

5
45
345
2345
12345

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=i; j<=5; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 11]

ABCDE
BCDE
CDE
DE
E

int main()
{
	int i,j;
	for(i=65; i<=69; i++)
	{
		for(j=i; j<=69; j++)
		{
			cout<<char(j);	//typecasting int to char
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 12]

EDCBA
DCBA
CBA
BA
A

int main()
{
	int i,j;
	for(i=69; i>=65; i--)
	{
		for(j=i; j>=65; j--)
		{
			cout<<char(j);	//typecasting int to char
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 13]

    1
   12
  123
 1234
12345

int main()
{
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		//first for loop to print ' ' i.e(space).
		for(k=5; k>i; k--)
		{
			cout<<" ";
		}
		//second for loop is to print integer.
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

/* 14]

    1
   121
  12321
 1234321
123454321

int main()
{
	int i,j,k,m;
	for(i=1; i<=5; i++)
	{
		//first for loop to print ' ' i.e.(space)
		for(k=5; k>i; k--)
		{
			cout<<" ";
		}
		//second for loop to print integer in increasing order
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		//third for loop to print integer in reverse order
		for(m=(i-1); m>=1; m--)
		{
			cout<<m;
		}
		cout<<"\n";
	}
	return 0;
}
*/
