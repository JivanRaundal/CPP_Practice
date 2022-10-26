// Q 9]. Define your own function to copy one string into another. (think about \0)

#include<iostream>
using namespace std;

void copy(char *t, char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		*(t+i) = *(s+i);
		i++;
	}
	*(t+i) = '\0';
}

int main()
{
	char source[100];
	char target[100];
	cout<<"\nEnter source string : ";
	cin.getline(source,98,'\n');
	cout<<"\nSource = "<<source;
	
	copy(target, source);	//copy() to copy source string into target string.
	
	cout<<"\n\nTarget = "<<target;
	return 0;
}
