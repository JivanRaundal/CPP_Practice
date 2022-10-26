// Q. Scan two strings from user and check which string will go first in dictionary.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	cout<<"\nEnter string 1 : ";
	cin.getline(str1,98,'\n');
	cout<<"\nEnter string 2 : ";
	cin.getline(str2,98,'\n');
	
	cout<<"\nString 1 = "<<str1;
	cout<<"\nString 2 = "<<str2;
	
	int x;
	x = strcmp(str1, str2);
	
	if(x==-1)	//x=-1 means str1<str2
	{
		cout<<"\n\n("<<str1<<") will go first in dictionary.";
	}
	else if(x==1)	//x=1 means str1>str2
	{
		cout<<"\n\n("<<str2<<") will go first in dictionary.";
	}
	else
	{
		cout<<"\n\nBoth strings are equal.";
	}
	return 0;
}
