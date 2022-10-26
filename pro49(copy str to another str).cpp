// Q. sacn a string from user and copy it into another string using pointer.

#include<iostream>
using namespace std;

int main()
{
	char source[30];	//source string
	char target[30];	//target string 
	// we have to copy source string into target string using pointer.
	
	char *p = source;	//or char *p = &source[0]
	char *q = target;	//or char *q = &target[0]
	
	cout<<"\nEntert the source string : ";
	cin.getline(p, 28, '\n');	//or cin.getline(source,28,'\n');
	cout<<"\nSource string is : "<<p;	//or cout<<source;
	
	int i=0;
	while(*(p+i)!='\0')
	{
		*(q+i) = *(p+i);
		i++;
	}
	*(q+i) = *(p+i);	//or *(q+i) = '\0'; to insert '\0' at the end of target string
	cout<<"\n\nCopied target string is : "<<q;	//or cout<<target;
	return 0;
}
