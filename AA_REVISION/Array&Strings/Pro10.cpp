// reverse the string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50] = "I Love Problem Solving";
	int i = 0;
	int j = strlen(str)-1;
	char temp;
	
	while(i <= j)
	{
		temp   = str[i];
		str[i] = str[j];
		str[j] = temp;	
		i++;
		j--;
	}
	
	cout<<"\nReverse String  = "<<str;
	return 0;
}
