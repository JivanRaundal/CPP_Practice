// scan & print String recursively

#include<iostream>
using namespace std;

void printString(char * s)
{
	if(*s == '\0')
	{
		return;
	}
	else
	{
		cout<<*s;
		printString(s+1);
	}
}

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	
	cout<<"\nString = ";
	printString(str);
	return 0;
}
