// Q. Scan a string from user and check whether it is pallindrome or not.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	
	int length;
	length = strlen(str);
	int i,j;
	i=0;
	j=length-1;
	while(i<=j)
	{
		if(str[i]!=str[j])
		{
			break;
		}
		i++;
		j--;
	}
	if(i>j)
	{
		cout<<"\n\nString is pallindrome.";
	}
	else
	{
		cout<<"\n\nSring is not pallindrome.";
	}
	return 0;
}
