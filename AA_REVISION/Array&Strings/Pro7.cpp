//scan a string from user, copy it in another string using 

#include<iostream>
using namespace std;

int main()
{
	char source[50];
	char target[50];
	
	cout<<"\nEnter source string : ";
	cin.getline(source,48,'\n');
	int i=0;
	while(source[i] != '\0')
	{
		target[i] = source[i];
		i++;
	}
	target[i] = '\0';
	cout<<"\nTarget String = "<<target;
	 
	return 0;
}
