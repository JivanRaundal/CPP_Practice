// Q.6]

#include<iostream>
using namespace std;

int main()
{
	char source[30];
	char target[30];
	cout<<"\nEnter Source String : ";
	cin.getline(source,28,'\n');
	
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
