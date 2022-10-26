// Q.1]

#include<iostream>
using namespace std;

int Length(char * s)
{
	int i=0;
	while(*(s+i) != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	
	cout<<"\nLength = "<<Length(str);
	return 0;
}
