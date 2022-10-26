// Q. calculate the length of string(char array) using your own length function.

#include<iostream>
using namespace std;

int length(char *p)	//char* p; bcz string is char array
{
	int i=0;
	while(*(p+i) != '\0')	//condition
	{
		i++;
	}
	return i;
}

int main()
{
	char str[30];
	cout<<"\nEnter the string : ";
	gets(str);
	
	cout<<"\n\nYour string is : "<<str;
	
	int len;
	len = length(str);	//base adress of str(char array) is passed
	
	cout<<"\n\nLength of string is : "<<len;
	return 0;
}
