// Q.9]

#include<iostream>
using namespace std;

void copyString(char * t,char * s)
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
	char source[30];
	char target[30];
	cout<<"\nEnter Source String : ";
	cin.getline(source,28,'\n');
	
	copyString(target, source);
	
	cout<<"\nTarget String = "<<target;
	return 0; 
}
