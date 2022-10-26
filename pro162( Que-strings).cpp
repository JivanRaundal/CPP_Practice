// Revision - strings 
// Q. Scan a string from user & allocate necessary amount of memory to it. Write code in main() fun only.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	cout<<"\nEnter the string : ";
	cin.getline(str,48,'\n');
	
	char *p;	
	p = new char[strlen(str) + 1];
	strcpy(p,str);
	cout<<"\nString = "<<p;
	
	delete[] p;
	return 0;
}
