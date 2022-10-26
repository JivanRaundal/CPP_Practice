/* 14]
		In this case to print characters either use their ASCII value (for A = 65 to Z = 90) & (for a = 97 to z = 122)
		OR use char datatype for iterator. eg- char i,j;
		
		ABCDE 
		BCDE
		CDE
		DE
		E
*/

#include<iostream>
using namespace std;

//1] using char datatype
int main()
{
	char i,j;
	for(i='A'; i<='E'; i++)
	{
		for(j=i; j<='E'; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}

//2] using ASCII value & Typecasting.
/*
int main()
{
	int i, j;
	for(i=65; i<=69; i++)
	{
		for(j=i; j<=69; j++)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
	return 0;
}
*/
