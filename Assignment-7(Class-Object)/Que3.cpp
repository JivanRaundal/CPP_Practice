// Q 3] Scan 2 strings from user & check which one will go first in dictionary.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	cout<<"\nEnter 1st string : ";
	cin.getline(str1,98);
	cout<<"\nEnter 2nd string : ";
	cin.getline(str2,98);
	
	cout<<"\n\nString 1 = "<<str1;
	cout<<"\nString 2 = "<<str2;
	
	int x;
	x = strcmp(str1,str2);
	if(x==-1)
	{
		cout<<"\nString 1) "<<str1<<" will go first in dictionary.";
	}
	else if(x==1)
	{
		cout<<"\nString 2) "<<str2<<" will go first in dictionary.";
	}
	else
	{
		cout<<"\nBoth strings are equal.";
	}
	return 0;
}
