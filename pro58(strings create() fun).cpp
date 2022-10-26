// Q. Scan s string from user and print it without wasting memory. write create() fun to scan string.

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	
	int length;
	length = strlen(str);
	char *p;
	p = new char(length+1);
	
	strcpy(p, str);
	
	return p;
}

int main()
{
	char *ptr;
	ptr = create();
	cout<<"\n\nYou entered = "<<ptr;
	return 0;
}
