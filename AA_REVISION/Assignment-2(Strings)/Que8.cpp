// Q.8]

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char source[30];
	char target[30];
	cout<<"\nEnter Source String : ";
	cin.getline(source,28,'\n');
	
	int i = strlen(source) - 1;
	int j=0;
	while(i >= 0)
	{
		target[j] = source[i];
		i--;
		j++;
	}
	target[j] = '\0';
	cout<<"\nTarget String = "<<target;
	return 0;  
}
