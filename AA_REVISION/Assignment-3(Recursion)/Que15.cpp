// Q.15]

#include<iostream>
using namespace std;

int length(char *p,int i)
{
	if(*(p+i) == '\0')
	{
		return i;
	}
	else
	{
		length(p, i+1);
	}
}

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	
	cout<<"\nLength = "<<length(str, 0);
	return 0;
}
