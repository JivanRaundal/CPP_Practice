// Q. Write your own copy() function to copy one string to another.

#include<iostream>
using namespace std;

void copy(char *t, char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		*(t+i) = *(s+i);	//for each iteration source char is copied in target char.
		i++;
	}
	*(t+i) = '\0';	//we have insert '\0' in target string at the end.
}

int main()
{
	char source[30];
	char target[30];
	
	cout<<"\nEnter source string : ";
	cin.getline(source,28,'\n');
	cout<<"\nSource string = "<<source;
	
	copy(target, source);	//copy() fun to copy source to target.
	cout<<"\n\nTarget string = "<<target;
	return 0;
}
