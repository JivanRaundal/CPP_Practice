// Q 1]. Scan a string from user. Write a function length() which returns length of string.

#include<iostream>
using namespace std;

int length(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str, 98,'\n');
	int len;
	len = length(str);
	cout<<"\nLength of string = "<<len;
	return 0;
}
