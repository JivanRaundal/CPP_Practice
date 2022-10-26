//scan a string from user, copy it in another string using copy function

#include<iostream>
#include<string.h>
using namespace std;

void copy(char *t,char * s)
{
	int i=0;
	while(*(s+i) != '\0')
	{
		*(t+i) = *(s+i);
		i++;
	}
	*(t+i) = '\0';
}

int main()
{
	char source[50];
	char target[50];
	
	cout<<"\nEnter source string : ";
	cin.getline(source,48,'\n');
	
	cout<<"\nLength of source = "<<strlen(source);
	//strcpy(target, source);
	copy(target, source);
	
	cout<<"\nLength of target = "<<strlen(target);
	cout<<"\nTarget String = "<<target;
	 
	return 0;
}
