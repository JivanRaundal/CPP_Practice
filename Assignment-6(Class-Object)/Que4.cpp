// Q 4] Scan a string from user. write your own function to find length of string and copy it in another string.
//		(Do not use inbuilt string functions)

#include<iostream>
using namespace std;

void length(char *p)
{
	int i=0;
	while(*(p+i) != '\0')
	{
		i++;
	}
	cout<<"\nLength of string is = "<<i;
}

void copy(char *t,char *s)
{
	int i=0;
	while(*(s+i) != 0)
	{
		*(t+i) = *(s+i);
		i++;
	}
	*(t+i) = '\0';	//to insert \0 at end of target string
}

int main()
{
	char source[100];
	char target[100];
	
	cout<<"\nEnter the string : ";
	cin.getline(source,98,'\n');
	cout<<"\nOriginal string = "<<source;
	
	length(source);
	copy(target, source);
	
	cout<<"\nCopied string = "<<target;
	return 0;
}
