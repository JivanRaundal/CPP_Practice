// Q 10].

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[300];
	cout<<"\nEnter string : ";
	cin.getline(str,98,'\n');
	
	int length;
	length = strlen(str);
	
	char *t;
	t = new char[length+1];
	
	strcpy(t, str);
	return t;
}

int main()
{
	char *ptr;
	ptr = create();
	cout<<"\n\nYou entered = "<<ptr;
	
	delete[] ptr;
	return 0;	
} 
