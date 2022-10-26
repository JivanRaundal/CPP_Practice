// Q 7]. Repeat Q6 using extra pointer method.

#include<iostream>
using namespace std;

int main()
{
	char source[100];
	char target[100];
	char *p, *q;
	p = source;
	q = target;
	
	cout<<"\nEnter source string : ";
	cin.getline(p,98,'\n');
	cout<<"\nSource = "<<p;
	
	int i=0;
	while(*(p+i)!='\0')
	{
		*(q+i) = *(p+i);
		i++;
	}
	*(q+i) = '\0';
	cout<<"\n\nTarget = "<<q;
	return 0;
}
