// Q 19]. WAP to copy one string into another recursively.

#include<iostream>
using namespace std;

void copy(char *t,char *s,int i)
{
	if(*(s+i)=='\0')
	{
		*(t+i) = '\0';	//to insert '\0' at the end of target string.
		return;
	}
	
	*(t+i) = *(s+i);
	copy(t,s,i+1);
}

int main()
{
	char source[100];
	cout<<"\nEnter the string : ";
	cin.getline(source,98,'\n');
	
	char target[100];
	copy(target, source, 0);
	cout<<"\nCopied string is : "<<target;
	return 0;
}
