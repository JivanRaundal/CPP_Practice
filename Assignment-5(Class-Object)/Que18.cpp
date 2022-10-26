// Q 18]. Scan a string from user. Store it without wasting a single byte of memory.

#include<iostream>
#include<string.h>
using namespace std;

char* get_string()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	
	int length;
	length = strlen(str);
	char *p;
	p = new char[length+1];
	strcpy(p,str);
	return p;
}

int main()
{
	char *ptr;
	ptr = get_string();
	cout<<"\nString = "<<ptr;
	
	delete[] ptr;
	return 0;
}
