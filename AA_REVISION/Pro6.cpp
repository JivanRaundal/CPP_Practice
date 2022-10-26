// scan a string & copy it in another string recursively

#include<iostream>
using namespace std;

void copy(char * t,char * s)
{
	if(*s == '\0')
	{
		*t = '\0';
		return;
	}
	else
	{
		*t = *s;
		copy(t+1, s+1);
	}
}

int main()
{
	char source[30], target[30];
	cout<<"\nEnter String : ";
	cin.getline(source ,28,'\n');
	
	copy(target, source);
	cout<<"\nTarget = "<<target;
	return 0;
}
